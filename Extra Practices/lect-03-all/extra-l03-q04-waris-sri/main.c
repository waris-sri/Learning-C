/*
---------- Lesson 03 Extra: Q04 -----------
Student ID: 6788112
Name: Waris
Surname: Sripatoomrak
Section: 3
-------------------------------------------
*/

#include <stdio.h>

int main(void) {
  // Your code started here.
  int x, y, d;
  int cnt = 0;
  scanf("%d %d %d", &x, &y, &d);
  if ((x > y) || (d == 0)) {
    printf("Unable to count");
  } else {
    for (int i = x; i <= y; i++) {
      if (i % d == 0) {
        printf("%d ", i);
        cnt++;
      }
    }
    printf("\ncount=%d", cnt);
  }
  return 0;
}
