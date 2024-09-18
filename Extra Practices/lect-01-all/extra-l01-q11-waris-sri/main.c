/*
---------- Lesson 01 Extra: Q11 -----------
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
  int n;
  scanf("%d", &n);
  printf("Thousand = %d\n", n / 1000);
  printf("Hundred = %d\n", n % 1000 / 100);
  printf("Ten = %d\n", n % 100 / 10);
  printf("One = %d", n % 10);
  return 0;
}
