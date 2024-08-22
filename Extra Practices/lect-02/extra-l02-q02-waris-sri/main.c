/*
---------- Lesson 02 Extra: Q02 -----------
Student ID: 6788112
Name: Waris
Surname: Sripatoomrak
Section: 3
-------------------------------------------
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  // Your code started here.
  int x;
  scanf("%d", &x);

  if (x > 0)
  {
    printf("Positive\n");
  }
  else if (x < 0)
  {
    printf("Negative\n");
  }
  else
  {
    printf("Zero\n");
  }

  if (x % 2 == 0)
  {
    printf("Even\n");
  }
  else
  {
    printf("Odd\n");
  }

  if (abs(x) % 10 == 7)
  {
    printf("Ending with 7\n");
  }

  if (x % 3 == 0 && x % 5 == 0)
  {
    printf("Divisible by 3 and 5\n");
  }
  else if (x % 3 == 0)
  {
    printf("Divisible by 3\n");
  }
  else if (x % 5 == 0)
  {
    printf("Divisible by 5\n");
  }

  return 0;
}