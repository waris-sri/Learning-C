/*
---------- Lesson 07 Extra: Q03 -----------
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
  int mat[n][n];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      scanf("%d", &mat[i][j]);
    }
  }
  int is_identity = 1;
  for (int i = 0; i < n && is_identity; i++) {
    for (int j = 0; j < n; j++) {
      if ((i == j && mat[i][j] != 1) || (i != j && mat[i][j] != 0)) {
        is_identity = 0;
        break;
      }
    }
  }
  is_identity ? printf("Yes") : printf("No");
  return 0;
}
