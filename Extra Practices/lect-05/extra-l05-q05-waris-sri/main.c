/*
---------- Lesson 05 Extra: Q05 -----------
Student ID: 6788112
Name: Waris
Surname: Sripatoomrak
Section: 3
-------------------------------------------
*/

#include <stdio.h>

int main(void) {
  /*
    Reference (n = 13):
    ↓ diagonal left to right (row = column)
    ↓                       ↓ diagonal right to left (n-1-i = column)
    * - - - - - - - - - - - *
    * * - - - - - - - - - * *
    * - * - - - - - - - * - *
    * - - * - - - - - * - - *
    * - - - * - - - * - - - *
    * - - - - * - * - - - - *
    * - - - - - * - - - - - * <- n = 6 = mid
    * - - - - * - * - - - - *
    * - - - * - - - * - - - *
    * - - * - - - - - * - - *
    * - * - - - - - - - * - *
    * * - - - - - - - - - * *
    * - - - - - - - - - - - *
    ↑            ↑
    ↑  otherwise, print dash
    side stars = (j == 0 || j == n - 1), first and last columns
  */
  int n;
  do {
    scanf("%d", &n);
  } while (!((n > 1) && (n % 2 != 0)));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (j == 0 || j == n - 1 || j == i || j == n - 1 - i) {
        printf("* ");
      } else {
        printf("- ");
      }
    }
    printf("\n");
  }
  return 0;
}
