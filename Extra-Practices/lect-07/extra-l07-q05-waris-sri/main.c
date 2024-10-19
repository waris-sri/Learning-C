/*
---------- Lesson 07 Extra: Q05 -----------
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
  int m1[n][n], m2[n][n], res[n][n], sum = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      scanf("%d", &m1[i][j]);
    }
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      scanf("%d", &m2[i][j]);
    }
  }
  // m1 matrix rows
  for (int i = 0; i < n; i++) {
    // m2 matrix columns
    for (int j = 0; j < n; j++) {
      // m1 or m2 matrix elements
      for (int k = 0; k < n; k++) {
        sum += m1[i][k] * m2[k][j];
      }
      res[i][j] = sum;
      sum = 0;
    }
  }
  // print all matrices
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      printf("%d ", m1[i][j]);
    }
    printf("\n");
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      printf("%d ", m2[i][j]);
    }
    printf("\n");
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      printf("%d ", res[i][j]);
    }
    printf("\n");
  }
  return 0;
}
