// Online C compiler to run C program online
#include <stdio.h>

int main() {
  int n, cnt = 0;
  do {
    scanf("%d", &n);
    if (n == 42) {
      printf("You WIN :)");
      break;
    }
    if (n < 42) {
      printf("too low\n");
      cnt++;
    }
    if (n > 42) {
      printf("too high\n");
      cnt++;
    }
    if (cnt == 5) {
      printf("You LOSE :(");
      break;
    }
  } while (cnt <= 5);
}
