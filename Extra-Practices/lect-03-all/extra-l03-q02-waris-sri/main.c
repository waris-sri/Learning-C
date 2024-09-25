/*
---------- Lesson 03 Extra: Q02 -----------
Student ID: 6788112
Name: Waris
Surname: Sripatoomrak
Section: 3
-------------------------------------------
*/

#include <stdio.h>

int main(void) {
  // Your code started here.
  int n;
  scanf("%d", &n);
  for (int i; i <= n; i++) {
    if (!((i % 7 == 0) || (i % 10 == 7))) {
      printf("%d ", i);
    } else {
      printf("seven-up ");
    }
  }
  return 0;
}
