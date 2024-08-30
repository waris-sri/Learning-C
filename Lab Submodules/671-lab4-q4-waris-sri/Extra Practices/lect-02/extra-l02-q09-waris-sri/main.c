/*
---------- Lesson 02 Extra: Q09 -----------
Student ID: 6788112
Name: Waris
Surname: Sripatoomrak
Section: 3
-------------------------------------------
*/

#include <stdio.h>

int main(void) {
  // Your code started here.
  float aqi;
  scanf("%f", &aqi);
  if (aqi >= 0 && aqi <= 50) {
    printf("Good");
  } else if (aqi >= 51 && aqi <= 100) {
    printf("Moderate");
  } else if (aqi >= 100 && aqi <= 200) {
    printf("Unhealthy");
  } else {
    printf("Very unhealthy");
  }
  return 0;
}
