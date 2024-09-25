/*
---------- Lesson 05 Extra: Q06 -----------
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
  if (n % 2 == 0) {
    // checkboard
    for (int i = 0; i < n / 2; i++) {
      for (int j = 0; j < n / 2; j++) {
        printf("- ");
      }
      for (int j = 0; j < n / 2; j++) {
        printf("+ ");
      }
      printf("\n");
    }
    for (int i = 0; i < n / 2; i++) {
      for (int j = 0; j < n / 2; j++) {
        printf("+ ");
      }
      for (int j = 0; j < n / 2; j++) {
        printf("- ");
      }
      printf("\n");
    }
  } else {
    // upright triangle
    for (int i = 0; i < n; i++) {
      for (int j = 0; j <= i; j++) {
        printf("* ");
      }
      printf("\n");
    }
  }
  return 0;
}
