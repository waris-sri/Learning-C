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
                            ↓ diagonal right to left (n-i-1 = column)
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
                ↑
      otherwise, print dash
  */
  // TODO: print side stars
  int n;
  do {
    scanf("%d", &n);
  } while (!((n > 1) && (n % 2 != 0)));
  int mid = n / 2;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (j == i || j == n - i - 1) {
        printf("* ");
      } else {
        printf("- ");
      }
    }
    printf("\n");
  }
  return 0;
}
