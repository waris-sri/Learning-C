#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  // body
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n - 1 - i; j++) {
      printf("  ");
    }
    for (int j = 0; j < 2 * i + 1; j++) {
      printf("* ");
    }
    printf("\n");
  }
  // tentacles
  for (int i = 0; i < n - 2; i++) {
    for (int j = 0; j < 2 * n - 1; j++) {
      if (j % 2 != 0) {
        printf("* ");
      } else {
        printf("  ");
      }
    }
    printf("\n");
  }
}
