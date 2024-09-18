/*
---------- Lesson 02 Extra: Q14 -----------
Student ID: 6788112
Name: Waris
Surname: Sripatoomrak
Section: 3
-------------------------------------------
*/

#include <stdio.h>

int main(void) {
  // Your code started here.
  char water, milk, milk_foam;
  scanf("%c %c %c", &water, &milk, &milk_foam);
  if (water == 'Y' && milk == 'N' && milk_foam == 'N') {
    printf("Americano");
  } else if (milk == 'Y' && water == 'N' && milk_foam == 'N') {
    printf("Latte");
  } else if (milk_foam == 'Y' && water == 'N' && milk == 'N') {
    printf("Cappuccino");
  } else if (water == 'N' && milk == 'N' && milk_foam == 'N') {
    printf("Espresso");
  } else {
    printf("No matched drink");
  }
  return 0;
}
