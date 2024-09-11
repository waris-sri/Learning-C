/*
---------- Lesson 05 Extra: Q01 -----------
Student ID: 6788112
Name: Waris
Surname: Sripatoomrak
Section: 3
-------------------------------------------
*/

#include <stdio.h>

int main(void) {
  // Your code started here.
  int m;
  /*
    Reference:
    ----*----
    ---***---
    --*****--
    -*******-
    *********
  */
  do {
    scanf("%d", &m);
    for (int i = 0; i < m; i++) {
      // printf("%d\t", i + 1);
      // Left dashes (decreasing from m-1 to 0)
      for (int j = 0; j < m - 1 - i; j++) {
        printf("-");
      }
      // Asterisks (increasing from 1 to 2m-1)
      for (int j = 0; j < 2 * i + 1; j++) {
        printf("*");
      }
      // Right dashes (decreasing from m-1 to 0)
      for (int j = 0; j < m - 1 - i; j++) {
        printf("-");
      }
      printf("\n");
    }
  } while (m <= 0);
  return 0;
}
