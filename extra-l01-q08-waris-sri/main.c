/*
---------- Lesson 01 Extra: Q08 -----------
Student ID: 6788112
Name: Waris
Surname: Sripatoomrak
Section: 3
-------------------------------------------
*/

#include <stdio.h>

int main(void) {
  // Your code started here.
  float velo, time;
  scanf("%f %f", &velo, &time);
  printf("%.2f", velo * (time / 60)); // velocity * time[sec] = distance
  return 0;
}
