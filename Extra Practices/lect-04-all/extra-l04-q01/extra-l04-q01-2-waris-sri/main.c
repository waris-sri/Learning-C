/*
---------- Lesson 04 Extra: Q01.2 -----------
Student ID: 6788112
Name: Waris
Surname: Sripatoomrak
Section: 3
-------------------------------------------
*/

#include <stdio.h>

int main(void) {
  char x;
  do {
    scanf(" %c", &x);
    // Your code answered here (In parentheses).
  } while (!(x >= 'A' && x <= 'Z'));
  printf("Input is %c", x);

  return 0;
}
