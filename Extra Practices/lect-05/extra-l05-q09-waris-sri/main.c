/*
---------- Lesson 05 Extra: Q09 -----------
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
  // upper
  for (int i = 0; i < n; i++) {
    for (int k = n - 1; k > i; k--) {
      printf(" ");
    }
    for (int j = 0; j < 2 * i + 1; j++) {
      printf("*");
    }
    printf("\n");
  }
  // lower
  for (int i = n - 1; i > 0; i--) {
    for (int k = i; k < n; k++) {
      printf(" ");
    }
    for (int j = 2 * i - 1; j > 0; j--) {
      printf("*");
    }
    printf("\n");
  }
  return 0;
}
