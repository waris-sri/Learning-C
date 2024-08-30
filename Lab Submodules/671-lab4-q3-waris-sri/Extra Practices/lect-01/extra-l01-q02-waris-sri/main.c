/*
---------- Lesson 01 Extra: Q02 -----------
Student ID: 6788112
Name: Waris
Surname: Sripatoomrak
Section: 3
-------------------------------------------
*/

#include <stdio.h>

int main(void) {
  // Your code started here.
  int h = 0, m = 0, s = 0;
  scanf("%d", &s);
  if (s >= 3600) {
    h = s / 3600;
    s %= 3600;
  }
  // Don't use `else if` because both conditions need to be checked
  // separately, but are related and sequential.
  if (s >= 60) {
    m = s / 60;
    s %= 60;
  }
  printf("%d:%d:%d", h, m, s);
  return 0;
}
