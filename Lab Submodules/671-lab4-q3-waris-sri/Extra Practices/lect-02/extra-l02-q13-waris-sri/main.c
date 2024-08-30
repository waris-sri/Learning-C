/*
---------- Lesson 02 Extra: Q13 -----------
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
  scanf("%c", &ch);
  if (ch >= 'a' && ch <= 'z') {
    printf("%c", ch - 32);
  } else if (ch >= 'A' && ch <= 'Z') {
    printf("%c", ch + 32);
  } else {
    printf("%c", ch);
  }
  return 0;
}
