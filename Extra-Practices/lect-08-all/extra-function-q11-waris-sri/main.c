/*
---------- Lesson 09 Extra: Q11 -----------
Student ID: 6788112
Name: Waris
Surname: Sripatoomrak
Section: 3
-------------------------------------------
*/

#include <stdio.h>

void seq(int i, int start, int end, int step) {
  scanf("%d %d %d", &start, &end, &step);
  for (i = start; i <= end; i += step) {
    printf("%d ", i);
  }
  printf("\n");
}

int main() {
  int start, end, step;
  for (int i = 1; i <= 3; i++) {
    seq(i, start, end, step);
  }
  return 0;
}
