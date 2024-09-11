/*
---------- Lesson 03 Extra: Q12 -----------
Student ID: 6788112
Name: Waris
Surname: Sripatoomrak
Section: 3
-------------------------------------------
*/

#include <stdio.h>

int main(void) {
  // Your code started here.
  int year = 2023;
  float t, m, res;
  scanf("%f %f", &t, &m);
  res = t;
  while (res < m) {
    year++;
    res *= 1.05;
    printf("Year:%d, Fee: %.2f\n", year, res);
  }
  printf("In %d, the final fee is %.2f Baht", year, res);
  return 0;
}
