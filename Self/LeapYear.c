#include <stdio.h>

int main()
{
  int year;
  printf("Enter a year: ");
  scanf("%d", &year);
  // Leap years are divisible by 4 and 400, but not 100.
  if (year % 4 == 0)
  {
    printf("%d is a leap year", year);
  }
  else if (year % 400 == 0)
  {
    printf("%d is a leap year", year);
  }
  else
  {
    printf("%d is not a leap year", year);
  }
  return 0;
}