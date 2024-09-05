#include <stdio.h>

int main() {
  int n;
  do {
    scanf("%d", &n);
    for (int i = 2; i <= n; i++) {
      for (int j = 2; j <= n; j++) {
        if (i != j && i % j == 0) {
          break;
        }
        if (j == n) {
          printf("%d ", i);
        }
      }
    }
    break;
  } while (n >= 2 || n <= 1000);
}
