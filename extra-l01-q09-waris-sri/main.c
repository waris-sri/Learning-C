/*
---------- Lesson 01 Extra: Q09 -----------
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
  char n[1000], whole[1000], decimal[1000];
  int point = -1; // index of the decimal point
  scanf("%s", n);
  for (int i = 0; n[i] != '\0'; i++)
  {
    if (n[i] == '.')
    {
      point = i;
      break;
    }
  }
  if (point != -1)
  {
    printf("Whole number: ");
    for (int j = 0; j < point; j++)
    {
      printf("%c", n[j]);
    }
    printf("\nDecimal places: ");
    for (int k = point + 1; n[k] != '\0'; k++)
    {
      printf("%c", n[k]);
    }
  }
  return 0;
}
