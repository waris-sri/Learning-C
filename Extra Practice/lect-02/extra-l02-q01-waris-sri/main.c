/*
---------- Lesson 02 Extra: Q01 -----------
Student ID: 6788112
Name: Waris
Surname: Sripatoomrak
Section: 3
-------------------------------------------
*/

#include <stdio.h>

int main(void) {
  // Your code started here.
  float w, h;
  scanf("%f %f", &w, &h);
  if (w == 0 || w < 0 || h == 0 || h < 0) {
    printf("Invalid");
  } else {
    if (w == h) {
      printf("Square\n");
    } else {
      printf("Not Square\n");
    }
    printf("Area=%.2f", w * h);
  }
  return 0;
}
