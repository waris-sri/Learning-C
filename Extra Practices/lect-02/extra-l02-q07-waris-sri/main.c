/*
---------- Lesson 02 Extra: Q07 -----------
Student ID: 6788112
Name: Waris
Surname: Sripatoomrak
Section: 3
-------------------------------------------
*/

#include <stdio.h>
int main(void)
{
  int capacity;
  float charging_speed, rate;
  scanf("%d %f", &capacity, &charging_speed);
  float total_time = capacity / charging_speed;
  if (total_time <= 2)
  {
    rate = total_time * 4;
  }
  else
  {
    rate = (2 * 4) + ((total_time - 2) * 5);
    // The first 2 hours are charged at ฿4/kW,
    // the remaining (excluding the first 2 hours)
    // is charged at ฿5/kW.
  }
  printf("%.2f %.2f", total_time, rate);
  return 0;
}
