/*
---------- Lesson 03 Extra: Q03 -----------
Student ID: 6788112
Name: Waris
Surname: Sripatoomrak
Section: 3
-------------------------------------------
*/

#include <stdio.h>

int main(void) {
  // Your code started here.
  int x, y;
  scanf("%d %d", &x, &y);
  if ((y < 0) || (y == 0)) {
    printf("Unable to create a table");
  } else {
    for (int i = 1; i <= y; i++) {
      printf("%d*%d=%d\n", x, i, x * i);
    }
  }
  return 0;
}
