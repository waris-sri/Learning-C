/*
---------- Lesson 02 Extra: Q05 -----------
Student ID: 6788112
Name: Waris
Surname: Sripatoomrak
Section: 3
-------------------------------------------
*/

#include <stdio.h>

int main() {
  int year;
  scanf("%d", &year);

  // Leap years are divisible by 4, but not by 100, unless also divisible by
  // 400.
  if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
    printf("Leap");
  } else {
    printf("Common");
  }
  return 0;
}
