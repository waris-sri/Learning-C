/*
---------- Lesson 02 Extra: Q04 -----------
Student ID: 6788112
Name: Waris
Surname: Sripatoomrak
Section: 3
-------------------------------------------
*/

#include <stdio.h>

int main(void)
{
  // Your code started here.
  int x, y;
  scanf("%d %d", &x, &y);
  if (x > 0 && y > 0)
  {
    printf("Q1");
  }
  else if (x < 0 && y > 0)
  {
    printf("Q2");
  }
  else if (x < 0 && y < 0)
  {
    printf("Q3");
  }
  else if (x > 0 && y < 0)
  {
    printf("Q4");
  }
  else if (x == 0 || y == 0)
  {
    printf("No quadrant");
  }
  return 0;
}
