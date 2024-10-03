#include <stdio.h>

int main() {
  int a, b, ans = 1;
  scanf("%d %d", &a, &b);
  for (int i = 2; i <= a && i <= b;) {
    if (a % i == 0 && b % i == 0) {
      a /= i;
      b /= i;
      ans *= i;
      i = 2;
    } else {
      i++;
    }
  }
  printf("%d", ans * a * b);
  // basically finding GCD, just without recursion and multiplying a and b with
  // the final answer
}
