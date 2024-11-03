/*
------- Pointer Extra: Hamburger Dine-in --------
Student ID: 6788112
Name: Waris
Surname: Sripatoomrak
Section: 3
-------------------------------------------------
*/

#include <stdio.h>

void cashier(char type, int patties, int cheese, float *price) {
  // Your code started here.
  float patty_price;
  do {
    scanf("%c %d %d", &type, &patties, &cheese);
    switch (type) {
    case 'M':
      patty_price = 50;
      break;
    case 'P':
      patty_price = 40;
      break;
    case 'F':
      patty_price = 45;
      break;
    case 'C':
      patty_price = 30;
      break;
    default:
      patty_price = 0;
    }
    if (patties < 0 || cheese < 0) {
      printf("Can't sell, Good Bye.");
      break;
    }
    *price = (patty_price * patties) + (cheese * 10) + 20;
    printf("Total Price: %.2f", *price);
    break;
  } while (patties > 0 || cheese > 0);
}

int main(void) {
  // Your code started here.
  char type;
  int patties, cheese;
  float total;
  cashier(type, patties, cheese, &total);
  return 0;
}
