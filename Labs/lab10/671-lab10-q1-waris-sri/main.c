#include <stdio.h>

int x = 5;
int b = 5;

void foo() { x = 97; }

void bar() {
  int b = 3;
  b = b - 1;
  x = x - 2;
}

int main() {
  x = 65;
  foo();
  // printf("x = %d\n", x);
  for (int t = 10; t >= 0; t = t - 2) {
    bar();
    x = x + 1;
    // printf("x = %d\n", x);
  }
  // printf("b = %d\n", b);
  printf("Answer: %d\n", x - b);
  return 0;
}
