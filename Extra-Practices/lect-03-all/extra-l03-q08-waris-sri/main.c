/*
---------- Lesson 03 Extra: Q08 -----------
Student ID: 6788112
Name: Waris
Surname: Sripatoomrak
Section: 3
-------------------------------------------
*/

#include <stdio.h>

int main(void) {
  // Your code started here.
  char start, end;
  scanf("%c %c", &start, &end);
  /*
    Additional notes:
    ASCII 'a' = 97
    ASCII 'A' = 65
    ASCII '0' = 48
  */
  if (end <= start) {
    for (int i = start; i <= 'Z'; i++) {
      printf("%c ", i);
    }
    for (int i = 'A'; i <= end; i++) {
      printf("%c ", i);
    }
  } else {
    for (int i = start; i <= end; i++) {
      printf("%c ", i);
    }
  }
  return 0;
}
