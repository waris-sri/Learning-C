// YOUR CODE HERE
#include <stdio.h>

int main() {
  float income, tax;
  scanf("%f", &income);
  if (income < 25000) {
    tax = 0.1 * income;
  } else {
    tax = 0.15 * income;
  }
  printf("%.2f", tax);
  return 0;
}
