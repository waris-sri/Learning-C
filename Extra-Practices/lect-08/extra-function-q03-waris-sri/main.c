/*
---------- Lesson 09 Extra: Q03 -----------
Student ID: 6788112
Name: Waris
Surname: Sripatoomrak
Section: 3
-------------------------------------------
*/

#include <stdio.h>

float cashier() {
  // Your code started here.
  char patty;
  float patty_price, patty_n, cheese_n, total;
  do {
    scanf("%c %f %f", &patty, &patty_n, &cheese_n);
    switch (patty) {
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
    if (patty_n < 0 || cheese_n < 0) {
      printf("Can't sell, Good Bye.");
      break;
    }
    total = (patty_price * patty_n) + (cheese_n * 10) + 20;
  } while (!(patty_n >= 0 || cheese_n >= 0));
  return total;
}

int main(void) {
  // Your code started here.
  float price = cashier();
  if (price != 0)
    printf("Total Price: %.2f", price);
  return 0;
}
