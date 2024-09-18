/*
---------- Lesson 04 Extra: Q01.3 -----------
Student ID: 6788112
Name: Waris
Surname: Sripatoomrak
Section: 3
-------------------------------------------
*/

#include <stdio.h>

int main(void) {
  int x;
  do {
    scanf("%d", &x);
    // Your code answered here (In parentheses).
  } while (!(x > 0 && x % 2 != 0));
  printf("Input is %d", x);

  return 0;
}
