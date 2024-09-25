/*
---------- Lesson 05 Extra: Q11 -----------
Student ID: 6788112
Name: Waris
Surname: Sripatoomrak
Section: 3
-------------------------------------------
*/

#include <stdio.h>

// int main(void) {
//   int n;
//   do {
//     scanf("%d", &n);
//   } while (!(n > 1));
//   // upper
//   for (int i = 0; i <= n; i++) {
//     // left stars
//     for (int j = 0; j < i; j++) {
//       printf("*");
//     }
//     // middle dots
//     for (int j = 0; j <= 2 * (n - i); j++) {
//       printf(".");
//     }
//     // right stars
//     for (int j = 0; j < i; j++) {
//       printf("*");
//     }
//     printf("\n");
//   }
//   // middle stars
//   for (int i = 0; i < 2 * n + 1; i++) {
//     printf("*");
//   }
//   printf("\n");
//   // lower
//   for (int i = n; i >= 0; i--) {
//     // left stars
//     for (int j = 0; j < i; j++) {
//       printf("*");
//     }
//     // middle dots
//     for (int j = 0; j <= 2 * (n - i); j++) {
//       printf(".");
//     }
//     // right stars
//     for (int j = 0; j < i; j++) {
//       printf("*");
//     }
//     printf("\n");
//   }
//   return 0;
// }

int main(void) {
  int n;
  do {
    scanf("%d", &n);
  } while (!(n > 1));

  for (int i = 0; i <= 2 * n; i++) {
    for (int j = 0; j < 2 * n + 1; j++) {
      if (j <= i && i <= n) {
        // upper left wing
        printf("*");
      } else if (j >= 2 * n - i && i <= n) {
        // upper right wing
        printf("*");
      } else if (j <= 2 * n - i && i > n) {
        // lower left wing
        printf("*");
      } else if (j >= i && i > n) {
        // lower right wing
        printf("*");
      } else {
        // center dots
        printf(".");
      }
    }
    printf("\n");
  }
  return 0;
}
