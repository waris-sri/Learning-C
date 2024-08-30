/*
---------- Lesson 02 Extra: Q08 -----------
Student ID: 6788112
Name: Waris
Surname: Sripatoomrak
Section: 3
-------------------------------------------
*/

#include <stdio.h>

int main(void) {
  // Your code started here.
  float a, b, c;
  scanf("%f %f %f", &a, &b, &c);
  if (a < b && (c >= a && c <= b)) {
    printf("Valid");
  } else {
    printf("Out of range");
  }
  return 0;
}
