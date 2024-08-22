/*
---------- Lesson 02 Extra: Q03 -----------
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
  int temp, opt;
  float cel, fah;
  scanf("%d %d", &temp, &opt);
  switch (opt)
  {
  case 1:
    fah = (temp * 1.8) + 32;
    printf("%.2f", fah);
    break;
  case 2:
    cel = (temp - 32) / 1.8;
    printf("%.2f", cel);
    break;
  default:
    printf("Invalid choice");
  }
  return 0;
}
