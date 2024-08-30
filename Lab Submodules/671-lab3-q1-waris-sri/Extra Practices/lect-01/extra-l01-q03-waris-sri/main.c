/*
---------- Lesson 01 Extra: Q03 -----------
Student ID: 6788112
Name: Waris
Surname: Sripatoomrak
Section: 3
-------------------------------------------
*/

#include <stdio.h>

int main(void) {
  // Your code started here.
  float b, h;
  int a_int;
  float a_float;
  scanf("%f %f", &b, &h);
  // Check whether `b` or `h` is a float,
  // if so, output the area also as a float.
  // If not, output as an integer instead.
  if (b - (int)b != 0 || h - (int)h != 0) {
    // `0.5` is better than `1/2` because the
    // decimal point of 0.5 will be truncated to 0,
    // resulting in bugs!
    a_float = (0.5 * (b * h));
    printf("%.2f", a_float);
  } else {
    a_int = (0.5 * ((int)b * (int)h));
    printf("%d", a_int);
  }
  return 0;
}
