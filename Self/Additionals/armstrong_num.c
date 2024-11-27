#include <stdio.h>

int main() {
  int sum, mod, num;
  for (int i = 1; i <= 500; i++) {
    sum = 0; // reset `sum` each time when incremented
    num = i; // keep the original number for checking at the end
    while (num != 0) {
      mod = num % 10; // extract the last digit with modulo
      sum += mod * mod * mod;
      num /= 10; // keep extracting the last digit
    }
    if (sum == i) {
      printf("%d is an Armstrong number.\n", i);
    }
  }
  return 0;
}
