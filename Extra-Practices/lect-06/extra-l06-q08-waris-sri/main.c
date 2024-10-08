/*
---------- Lesson 05 Extra: Q20 -----------
Student ID: 6788112
Name: Waris
Surname: Sripatoomrak
Section: 3
-------------------------------------------
*/

#include <stdio.h>
#define N 4

int main(void) {
  int cnt = 0;
  int max_width = N + 1;
  char sequence[] = {'T', 'A', 'S', 'T', 'Y'};
  int seq_len = 5;

  while (cnt < N) {
    int section_lines = cnt + 2; // cnt starts from 0
    for (int k = 0; k <= cnt + 1; k++) {
      // Left spaces
      for (int i = max_width - k - 1; i >= 0; i--) {
        printf(" ");
      }
      // if it's the last line of each section, print letters only
      if (k == section_lines - 1) {
        for (int i = 0; i <= cnt + 1; i++) {
          printf("%c ", sequence[i % seq_len]);
        }
      } else {
        // else, mix letters and asterisks
        if (cnt % 2 == 0) {
          // for even sections (cnt even, starts from 0), start with a letter
          for (int i = 0; i <= k; i++) {
            if (i % 2 == 0) {
              printf("%c ", sequence[i % seq_len]);
            } else {
              printf("* ");
            }
          }
        } else {
          // for even sections (cnt even, starts from 0), start with *
          for (int i = 0; i <= k; i++) {
            if (i % 2 == 0) {
              printf("* ");
            } else {
              printf("%c ", sequence[i % seq_len]);
            }
          }
        }
      }
      printf("\n");
    }
    cnt++;
  }

  // Trunk
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < (max_width / 2) + 2; j++) {
      printf(" ");
    }
    printf("|||\n");
  }

  return 0;
}
