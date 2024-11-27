/*
---------- Linear Algebra Program -----------
Student ID: 6788112
Name: Waris
Surname: Sripatoomrak
Section: 3
-------------------------------------------
*/

#include <math.h>
#include <stdio.h>

#define N 4

int already_ran = 0;

void gaussian(float aug[3][4]);
void gaussianjordan(float aug[3][4]);
void det(float mat[N][N]);
float calculate_determinant(float matrix[N][N], int n);

int main(void) {
  // Your code started here.
  int opt;
  do {
    if (already_ran == 0) {
      printf("Welcome to linear algebra program.\n"
             "===============================================\n"
             "1. Gaussian Elimination\n"
             "2. Gaussian–Jordan Elimination\n"
             "3. Find determinant\n"
             "4. Cramer's Rule\n"
             "5. Inverse of a matrix\n"
             "6. Dot product\n"
             "7. Cross product\n"
             "8. Find magnitude of vector\n"
             "0. End the program\n"
             "===============================================\n");
      already_ran = 1;
      printf("Please input the method that you want to use: ");
      scanf("%d", &opt);
    } else {
      printf("What do you want to use next?\n"
             "===============================================\n"
             "1. Gaussian Elimination\n"
             "2. Gaussian–Jordan Elimination\n"
             "3. Find determinant\n"
             "4. Cramer's Rule\n"
             "5. Inverse of a matrix\n"
             "6. Dot product\n"
             "7. Cross product\n"
             "8. Find magnitude of vector\n"
             "0. End the program\n"
             "===============================================\n");
      printf("Please input the method that you want to use: ");
      scanf("%d", &opt);
    }

    int n;
    float mat[n][n];
    float aug[3][4];           // equations
    float vec_i, vec_j, vec_k; // vectors
    float a, b, c;             // points
    switch (opt) {
    case 1:
      gaussian(aug);
      printf("===============================================\n");
      break;
    case 2:
      gaussianjordan(aug);
      printf("===============================================\n");
      break;
    case 3:
      det(mat);
      printf("===============================================\n");
      break;
    case 0:
      printf("===============================================\n"
             "Thank you for using linear algebra program!\n"
             "===============================================\n");
      break;
    }
  } while (opt != 0);

  return 0;
}

/*
   0 1 2
0 [P U U]   L: row > col (lower triangle)
1 [L P U]   P: row = col (pivots)
2 [L L P]   U: row < col (upper triangle)
*/

/*
 *
 * GAUSSIAN ELIMINATION
 *
 */

void gaussian(float aug[3][4]) {
  float sol[3];
  for (int i = 0; i < 3; i++) {
    printf("Please input equation #%d (x, y, z, d): ", i + 1);
    for (int j = 0; j < 4; j++) {
      scanf("%f", &aug[i][j]);
    }
  }

  // preview equations and values
  printf("-------------------- INPUTS -------------------\n");
  for (int i = 0; i < 3; i++) {
    printf(">> Equation %d: (%.1fx) + (%.1fy) + (%.1fz) = %.1f\n", i + 1,
           aug[i][0], aug[i][1], aug[i][2], aug[i][3]);
  }
  printf(">> Augmented Matrix:\n");
  for (int i = 0; i < 3; i++) {
    printf("[ %.1f\t %.1f\t%.1f\t| %.1f\t]\n", aug[i][0], aug[i][1], aug[i][2],
           aug[i][3]);
  }

  // forward elimination
  float factor;
  for (int i = 0; i < 2; i++) {
    // iterates over pivot rows
    for (int j = i + 1; j < 3; j++) {
      // iterates over rows below the pivot row
      factor = aug[j][i] / aug[i][i];
      for (int k = i; k < 4; k++) {
        // performs the elimination on each element in the row
        aug[j][k] = aug[j][k] - factor * aug[i][k];
      }
    }
  }
  // back substitution
  sol[2] = aug[2][3] / aug[2][2];
  sol[1] = (aug[1][3] - aug[1][2] * sol[2]) / aug[1][1];
  sol[0] = (aug[0][3] - aug[0][1] * sol[1] - aug[0][2] * sol[2]) / aug[0][0];

  printf("------------------- OUTPUTS -------------------\n");
  printf("Answer:\n");
  for (int i = 0; i < 3; i++) {
    printf("[ %.1f\t %.1f\t%.1f\t| %.1f\t]\n", aug[i][0], aug[i][1], aug[i][2],
           aug[i][3]);
  }
  printf("Solutions:\n");
  printf("(x, y, z) = (%.1f, %.1f, %.1f)\n", sol[0], sol[1], sol[2]);
}

/*
 *
 * GAUSSIAN–JORDAN ELIMINATION
 *
 */

void gaussianjordan(float aug[3][4]) {
  float sol[3];
  for (int i = 0; i < 3; i++) {
    printf("Please input equation #%d (x, y, z, d): ", i + 1);
    for (int j = 0; j < 4; j++) {
      scanf("%f", &aug[i][j]);
    }
  }

  // preview equations and values
  printf("-------------------- INPUTS -------------------\n");
  for (int i = 0; i < 3; i++) {
    printf(">> Equation %d: (%.1fx) + (%.1fy) + (%.1fz) = %.1f\n", i + 1,
           aug[i][0], aug[i][1], aug[i][2], aug[i][3]);
  }
  printf(">> Augmented Matrix:\n");
  for (int i = 0; i < 3; i++) {
    printf("[ %.1f\t %.1f\t%.1f\t| %.1f\t]\n", aug[i][0], aug[i][1], aug[i][2],
           aug[i][3]);
  }

  float pivot, factor;
  for (int i = 0; i < 3; i++) { // thru cols
    // make all pivots 1
    pivot = aug[i][i];
    for (int p = i; p < 4; p++) {
      aug[i][p] /= pivot;
    }
    // eliminate all factors to 0 (non-pivots) in rows
    for (int f = 0; f < 3; f++) {
      if (f != i) {
        factor = aug[f][i];           // all except main diagonal (pivots)
        for (int k = i; k < 4; k++) { // thru cols
          aug[f][k] -= factor * aug[i][k];
        }
      }
    }
  }

  printf("------------------- OUTPUTS -------------------\n");
  printf("Answer:\n");
  for (int i = 0; i < 3; i++) {
    printf("[ %.1f\t %.1f\t%.1f\t| %.1f\t]\n", aug[i][0], aug[i][1], aug[i][2],
           aug[i][3]);
  }
  printf("Solutions:\n");
  printf("(x, y, z) = (%.1f, %.1f, %.1f)\n", sol[0], sol[1], sol[2]);
}

/*
 *
 * DETERMINANT
 *
 */

void det(float mat[N][N]) {
  int n;
  printf("Please input size of matrix (1-4): ");

  do {
    scanf("%d", &n);
    if (n < 1 || n > 4) {
      printf("Please input size of matrix (1-4): ");
    }
  } while (n < 1 || n > 4);

  printf("-------------------- INPUTS -------------------\n");
  float matrix[N][N];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      printf("Please input number in index [%d][%d]: ", i, j);
      scanf("%f", &matrix[i][j]);
    }
  }

  printf("Matrix:\n");
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      printf("%.2f\t", matrix[i][j]);
    }
    printf("\n");
  }

  printf("------------------- OUTPUTS -------------------\n");
  printf("Determinant = %.2f\n", calculate_determinant(matrix, n));
}

float calculate_determinant(float matrix[N][N], int n) {
  float det = 0;
  float submatrix[N][N];

  if (n == 1) {
    return matrix[0][0];
  }

  if (n == 2) {
    return ((matrix[0][0] * matrix[1][1]) - (matrix[0][1] * matrix[1][0]));
  }

  /* For a matrix like:
     [a b c]
     [d e f]  We want to create submatrices by removing first row
     [g h i]  and each column one at a time
  */
  for (int x = 0; x < n; x++) {
    /* x controls which column we skip
       e.g. if x=0, we skip first column
       if x=1, we skip second column etc */

    int subi = 0;                 // tracks row in smaller submatrix
    for (int i = 1; i < n; i++) { // start from row 1 to skip first row
      /* After skipping first row, for x=0:
         [e f]  <- subi=0
         [h i]  <- subi=1
      */

      int subj = 0; // tracks column in smaller submatrix
      for (int j = 0; j < n; j++) {
        if (j == x)
          continue; // directs to next j iteration (loop), skipping when j
                    // equals x
                    /* After skipping column x:
                       For x=0: [b c]  subj: 0->1
                       For x=1: [a c]  subj: 0->1
                       For x=2: [a b]  subj: 0->1
                    */
        submatrix[subi][subj] = matrix[i][j];
        subj++; // move to next column in submatrix
      }
      subi++; // move to next row in submatrix
    }
    det = det +
          (pow(-1, x) * matrix[0][x] * calculate_determinant(submatrix, n - 1));
  }
  return det;
}
