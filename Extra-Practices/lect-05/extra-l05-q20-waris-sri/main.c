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
  } while (!(n > 1 && n % 2 != 0));

  // max leaf width (at the bottom)
  int max_width = 2 * n + 1;

  // customize leaf character (optional)
  char leaf;
  scanf(" %c", &leaf);

  while (cnt < n) {
    for (int k = 0; k <= cnt + 1; k++) {
      // left spaces
      for (int i = max_width - 2 * k - 1; i > 0; i -= 2) {
        printf(" ");
      }
      // leaves
      for (int i = 0; i < 2 * k + 1; i++) {
        printf("%c", leaf);
      }
      printf("\n");
    }
    cnt++;
  }

  // tree trunk
  for (int i = 0; i < 1; i++) {
    for (int j = 0; j < (max_width - 3) / 2; j++) {
      printf(" ");
    }
    printf("|||\n");
  }

  return 0;
}
