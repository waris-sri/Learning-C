/*
---------- Lesson 05 Extra: Q08 -----------
Student ID: 6788112
Name: Waris
Surname: Sripatoomrak
Section: 3
-------------------------------------------
*/

#include <stdio.h>

int main(void) {
  // Your code started here.
  int m, n;
  scanf("%d %d", &m, &n);
  if (m <= 0 || n <= 0) {
    printf("Please input a positive integer!");
    return 0;
  }
  // repetitions
  for (int k = 0; k < n; k++) {
    // left to right
    for (int i = 0; i < m; i++) {
      for (int j = 0; j < m; j++) {
        if (i == j) {
          printf("> ");
        } else {
          printf("- ");
        }
      }
      printf("\n");
    }
    // right to left
    for (int i = 0; i < m - 1; i++) {
      for (int j = m; j > 0; j--) {
        if (i == j - 2) {
          printf("> ");
        } else {
          printf("- ");
        }
      }
      printf("\n");
    }
  }
  return 0;
}
