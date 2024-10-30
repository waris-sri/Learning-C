/*
---------- Linear Algebra Program -----------
Student ID: 6788112
Name: Waris
Surname: Sripatoomrak
Section: 3
-------------------------------------------
*/

#include <stdio.h>
int already_ran = 0;

void gaussian(float augmat[3][4]);

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

    float augmat[3][4];        // equations
    float vec_i, vec_j, vec_k; // vectors
    float a, b, c;             // points
    switch (opt) {
    case 1:
      gaussian(augmat);
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

void gaussian(float augmat[3][4]) {
  float sol[3];
  for (int i = 0; i < 3; i++) {
    printf("Please input equation #%d (x, y, z, d): ", i + 1);
    for (int j = 0; j < 4; j++) {
      scanf("%f", &augmat[i][j]);
    }
  }

  // preview equations and values
  printf("-------------------- INPUTS -------------------\n");
  for (int i = 0; i < 3; i++) {
    printf(">> Equation %d: (%.1fx) + (%.1fy) + (%.1fz) = %.1f\n", i + 1,
           augmat[i][0], augmat[i][1], augmat[i][2], augmat[i][3]);
  }
  printf(">> Augmented Matrix:\n");
  for (int i = 0; i < 3; i++) {
    printf("[ %.1f\t %.1f\t%.1f\t| %.1f\t]\n", augmat[i][0], augmat[i][1],
           augmat[i][2], augmat[i][3]);
  }

  // forward elimination
  float factor;
  for (int i = 0; i < 2; i++) {
    // iterates over pivot rows
    for (int j = i + 1; j < 3; j++) {
      // iterates over rows below the pivot row
      factor = augmat[j][i] / augmat[i][i];
      for (int k = i; k < 4; k++) {
        // performs the elimination on each element in the row
        augmat[j][k] = augmat[j][k] - factor * augmat[i][k];
      }
    }
  }
  // back substitution
  sol[2] = augmat[2][3] / augmat[2][2];
  sol[1] = (augmat[1][3] - augmat[1][2] * sol[2]) / augmat[1][1];
  sol[0] = (augmat[0][3] - augmat[0][1] * sol[1] - augmat[0][2] * sol[2]) /
           augmat[0][0];

  printf("------------------- OUTPUTS -------------------\n");
  printf("Answer:\n");
  for (int i = 0; i < 3; i++) {
    printf("[ %.1f\t %.1f\t%.1f\t| %.1f\t]\n", augmat[i][0], augmat[i][1],
           augmat[i][2], augmat[i][3]);
  }
  printf("Solutions:\n");
  printf("(x, y, z) = (%.1f, %.1f, %.1f)\n", sol[0], sol[1], sol[2]);
}
