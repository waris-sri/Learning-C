/*
---------- Lesson 06 Extra: Q10 -----------
Student ID: 6788112
Name: Waris
Surname: Sripatoomrak
Section: 3
-------------------------------------------
*/

#include <stdio.h>

int main() {
  // Your code started here.
  int s, m, l;
  char sauce;
  scanf("%d %d %d", &s, &m, &l);
  scanf(" %c", &sauce);

  int prices[3] = {20, 30, 40};
  int quantities[3] = {s, m, l};
  int cost = quantities[0] * prices[0] + quantities[1] * prices[1] +
             quantities[2] * prices[2];

  int sauce_cost;
  if (sauce == 'S') {
    sauce_cost = 0;
  } else {
    sauce_cost = 15;
  }

  float total = (cost + sauce_cost) * 1.07;

  printf("Small skewers: %d\n", s);
  printf("Medium skewers: %d\n", m);
  printf("Large skewers: %d\n", l);
  printf("Total: %.2lf", total);

  return 0;
}
