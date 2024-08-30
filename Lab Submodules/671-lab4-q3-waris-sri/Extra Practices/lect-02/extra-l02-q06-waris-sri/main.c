/*
---------- Lesson 02 Extra: Q06 -----------
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
  char ch;
  int opt;
  scanf("%c", &ch);
  if (ch == 'M' || ch == 'm')
  {
    opt = 1;
  }
  else if (ch == 'A' || ch == 'a')
  {
    opt = 2;
  }
  else if (ch == 'H' || ch == 'h')
  {
    opt = 3;
  }
  else if (ch == 'I' || ch == 'i')
  {
    opt = 4;
  }
  else if (ch == 'D' || ch == 'd')
  {
    opt = 5;
  }
  else if (ch == 'O' || ch == 'o')
  {
    opt = 6;
  }
  else if (ch == 'L' || ch == 'l')
  {
    opt = 7;
  }
  else
  {
    opt = 8;
  }
  switch (opt)
  {
  case 1:
    printf("Mastery");
    break;
  case 2:
    printf("Altruism");
    break;
  case 3:
    printf("Harmony");
    break;
  case 4:
    printf("Integrity");
    break;
  case 5:
    printf("Determination");
    break;
  case 6:
    printf("Originality");
    break;
  case 7:
    printf("Leadership");
    break;
  case 8:
    printf("Invalid character");
    break;
  }
  return 0;
}
