/*
---------- Lesson 05 Extra: Q18 -----------
Student ID: 6788112
Name: Waris
Surname: Sripatoomrak
Section: 3
-------------------------------------------
*/

#include <stdio.h>

int main(void) {
  /*
  let n = 5
        ↓ n asterisks with spaces after/before for n lines
        ↓         |——— n*4 width ————|
  ODD → * * * * * ====================
  evn →  * * * * *--------------------
  odd → * * * * * ====================
  evn →  * * * * *--------------------
  ODD → * * * * * ====================
        ------------------------------
        ==============================
        ------------------------------
        ==============================
        |———————— n*6 width —————————|
            (n*2-1 lines in total)
  */
  int n;
  do {
    printf("[Odd number]\n");
    scanf("%d", &n);
  } while (!(n > 1 && n % 2 != 0));

  // use 1-based indexing to avoid confusion
  for (int i = 1; i <= n * 2 - 1; i++) {
    // printf("%d: ", i); // line count debugging
    // if the canton hasn't finished printing yet ...
    if (i <= n) {
      // canton
      for (int c = 1; c <= n; c++) {
        if (i % 2 != 0) {
          printf("* ");
        } else {
          printf(" *");
        }
      }
      // short stripes
      for (int s = 1; s <= n * 4; s++) {
        if (i % 2 != 0) {
          printf("=");
        } else {
          printf("-");
        }
      }
    }
    // ... else then print full-width stripes
    else {
      // full-width stripes
      for (int s = 1; s <= n * 6; s++) {
        if (i % 2 != 0) {
          printf("=");
        } else {
          printf("-");
        }
      }
    }
    printf("\n");
  }

  return 0;
}
