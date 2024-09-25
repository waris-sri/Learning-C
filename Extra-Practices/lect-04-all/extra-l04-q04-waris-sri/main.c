/*
---------- Lesson 04 Extra: Q04 -----------
Student ID: 6788112
Name: Waris
Surname: Sripatoomrak
Section: 3
-------------------------------------------
*/

#include <stdio.h>

int main(void) {
  // Your code started here.
  char ch;
  int up = 0, lo = 0;
  do {
    scanf("%c", &ch);
    if (ch >= 'A' && ch <= 'Z') {
      up++;
    }
    if (ch >= 'a' && ch <= 'z') {
      lo++;
    }
  } while (!(ch == '#'));
  printf("Uppercase: %d\nLowercase: %d", up, lo);
  return 0;
}
