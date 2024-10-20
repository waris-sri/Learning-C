/*
---------- Lesson 07 Extra: Q04 -----------
Student ID: 6788112
Name: Waris
Surname: Sripatoomrak
Section: 3
-------------------------------------------
*/

#include <stdio.h>

int main(void) {
  // Your code started here.
  float mat[2][2], adj[2][2], inv[2][2];
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      scanf("%f", &mat[i][j]);
    }
  }
  float det = (mat[0][0] * mat[1][1]) - (mat[0][1] * mat[1][0]);
  if (det == 0) {
    printf("Invalid matrix");
  } else {
    for (int i = 0; i < 2; i++) {
      for (int j = 0; j < 2; j++) {
        adj[0][0] = mat[1][1];
        adj[0][1] = mat[0][1] * -1;
        adj[1][0] = mat[1][0] * -1;
        adj[1][1] = mat[0][0];
      }
    }
    float mult = 1 / det;
    for (int i = 0; i < 2; i++) {
      for (int j = 0; j < 2; j++) {
        if (mult * adj[i][j] != 0)
          inv[i][j] = mult * adj[i][j];
        else
          inv[i][j] = -1 * mult * adj[i][j];
      }
    }
    for (int i = 0; i < 2; i++) {
      for (int j = 0; j < 2; j++) {
        printf("%.2f ", inv[i][j]);
      }
      printf("\n");
    }
  }
  return 0;
}
