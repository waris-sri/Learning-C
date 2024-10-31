#include <stdio.h>

void sum(int a, int b, int c, int *total);

int main(void) {
  int a, b, c;
  int total = 0;
  scanf("%d %d %d", &a, &b, &c);
  sum(a, b, c, &total);
  printf("%d", total);
  return 0;
}

void sum(int a, int b, int c, int *total) { *total = a + b + c; }
