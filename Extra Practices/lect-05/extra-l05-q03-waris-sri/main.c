/*
---------- Lesson 05 Extra: Q03 -----------
Student ID: 6788112
Name: Waris
Surname: Sripatoomrak
Section: 3
-------------------------------------------
*/

#include <stdio.h>

int main(void) {
  // Your code started here.
  int n, x, y;
  scanf("%d %d %d", &n, &x, &y);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      printf("(%d,%d) ", i, j);
      if (i == x && j == y) {
        break;
      }
    }
    if (i == x) {
      break;
    }
    printf("\n");
  }
  return 0;
}
