/*
---------- Lesson 04 Extra: Q06 -----------
Student ID: 6788112
Name: Waris
Surname: Sripatoomrak
Section: 3
-------------------------------------------
*/

#include <stdio.h>

int main(void) {
  // Your code started here.
  // 'A' is 65 and 'a' is 97.
  for (int i = 97; i <= 122; i++) {
    if (i == 97) {
      printf("%c", i);
    } else if (i % 2 == 0) {
      printf(", %c", i - 32);
    } else {
      printf(", %c", i);
    }
  }
  return 0;
}
