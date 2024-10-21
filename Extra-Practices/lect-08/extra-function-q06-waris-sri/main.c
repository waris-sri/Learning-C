/*
---------- Lesson 09 Extra: Q06 -----------
Student ID: 6788112
Name: Waris
Surname: Sripatoomrak
Section: 3
-------------------------------------------
*/

#include <math.h>
#include <stdio.h>

float cal_dist(float x1, float y1, float z1, float x2, float y2, float z2) {
  // Your code started here.
  return sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2) + pow((z1 - z2), 2));
}

int main(void) {
  // Your code started here.
  float x1, y1, z1, x2, y2, z2;
  scanf("%f %f %f %f %f %f", &x1, &y1, &z1, &x2, &y2, &z2);
  printf("%.2f", cal_dist(x1, y1, z1, x2, y2, z2));
  return 0;
}
