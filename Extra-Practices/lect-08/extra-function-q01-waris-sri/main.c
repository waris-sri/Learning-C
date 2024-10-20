/*
---------- Lesson 09 Extra: Q01 -----------
Student ID: 6788112
Name: Waris
Surname: Sripatoomrak
Section: 3
-------------------------------------------
*/

#include <math.h>
#include <stdio.h>

void quadratic(float a, float b, float c) {
  // Your code started here.
  float r1, r2, dis;
  int ctg;
  dis = (b * b) - 4 * a * c;

  if (dis > 0) {
    ctg = 1; // two distinct roots
  } else if (dis == 0) {
    ctg = 0; // two same roots
  } else {
    ctg = -1; // negative roots
  }

  switch (ctg) {
  case 1:
    r1 = (-b + sqrt(dis)) / (2 * a);
    r2 = (-b - sqrt(dis)) / (2 * a);
    printf("Roots: %.2f %.2f", r1, r2);
    break;
  case 0:
    r1 = r2 = -b / (2 * a);
    printf("Root: %.2f", r1);
    break;
  case -1:
    printf("Invalid discriminant, can't compute in real number.");
    break;
  default:
    printf("Error");
  }
}

int main(void) {
  // Your code started here.
  float a, b, c;
  scanf("%f %f %f", &a, &b, &c);
  quadratic(a, b, c);
  return 0;
}
