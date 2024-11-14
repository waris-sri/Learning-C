// YOUR CODE HERE
#include <stdio.h>

int main() {
  struct Bank {
    int acc_num;
    char bank_name[21];
    float balance;
  };

  struct Bank bank[4] = {
      {11111, "Bangkok_Bank", 100.50},
      {12345, "Bangkok_Bank", 333.33},
      {65444, "SCB", 999.90},
      {34545, "SCB", 5000.55},
  };

  for (int i = 3; i >= 0; i--) {
    printf("%d -> %.2f [%s]\n", bank[i].acc_num, bank[i].balance,
           bank[i].bank_name);
  }
  return 0;
}
