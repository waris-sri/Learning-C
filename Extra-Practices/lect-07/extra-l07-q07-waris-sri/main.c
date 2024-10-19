/*
---------- Lesson 07 Extra: Q07 -----------
Student ID: 6788112
Name: Waris
Surname: Sripatoomrak
Section: 3
-------------------------------------------
*/

#include <stdio.h>

int main(void) {
  // Your code started here.
  int n;
  scanf("%d", &n);
  // i = n = row, j = m = col
  int mat[n][n], tra[n][n];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      scanf("%d", &mat[i][j]);
    }
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      tra[i][j] = mat[j][i];
      // printf("%d ", tra[i][j]);
    }
    // printf("\n");
  }
  int yes = 1; // assume as symmetric
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (mat[i][j] != tra[i][j]) {
        yes = 0;
      }
    }
  }
  if (yes)
    printf("Symmetric");
  else
    printf("Asymmetric");
  return 0;
}
