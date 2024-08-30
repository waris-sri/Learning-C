#include <stdio.h>

int main() {
  int n, res = 1, base;
  scanf("%d", &n);
  for (base = 1; base <= n; base++) {
    res *= base;
  }
  printf("%d", res);
}
