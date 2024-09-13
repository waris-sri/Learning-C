/*
---------- Lesson 05 Extra: Q20 -----------
Student ID: 6788112
Name: Waris
Surname: Sripatoomrak
Section: 3
-------------------------------------------
*/

#include <stdio.h>

int main(void) {
  int n, cnt = 0;

  do {
    scanf("%d", &n);
  } while (!((n > 1) && (n % 2 != 0)));

  // Maximum leaf width
  int max_width = 2 * n + 1;

  // Customize leaf character
  char leaf;
  scanf(" %c", &leaf);

  while (cnt < n) {
    for (int k = 0; k <= cnt + 1; k++) {
      // Left spaces
      for (int i = max_width - 2 * k - 1; i > 0; i -= 2) {
        printf(" ");
      }
      // Leaves
      for (int i = 0; i < 2 * k + 1; i++) {
        printf("%c", leaf);
      }
      printf("\n");
    }
    cnt++;
  }

  // Stem
  for (int i = 0; i < 1; i++) {
    for (int j = 0; j < (max_width - 3) / 2; j++) {
      printf(" ");
    }
    printf("|||\n");
  }

  return 0;
}
