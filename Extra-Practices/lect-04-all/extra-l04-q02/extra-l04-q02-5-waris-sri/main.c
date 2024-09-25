/*
---------- Lesson 04 Extra: Q02.5 -----------
Student ID: 6788112
Name: Waris
Surname: Sripatoomrak
Section: 3
-------------------------------------------
*/

#include <stdio.h>

int main(void) {
  // Your code started here.
  for (int i = 1; i <= 10; i++) {
    printf("%d", i);
    if (i % 2 != 0) {
      printf("A ");
    } else {
      printf("B ");
    }
  }
  return 0;
}
