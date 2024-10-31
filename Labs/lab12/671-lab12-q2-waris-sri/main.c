#include <stdio.h>

int size = 3;
void compute_sum(int a, int b, int c);

int main(void) {
  int a, b, c;
  for (int i = 0; i < size; i++) {
    scanf("%d %d %d", &a, &b, &c);
  }
  compute_sum(a, b, c);
  return 0;
}

void compute_sum(int a, int b, int c) {
  int sum;
  for (int i = 0; i < size; i++) {
    sum = a + b + c;
  }
  printf("%d", sum);
}
