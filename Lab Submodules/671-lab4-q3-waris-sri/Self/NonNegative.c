#include <stdio.h>
int main(void) {
  int n;
  do {
    printf("Enter non-negative number: ");
    scanf("%d", &n);
  } while (n < 0);
  printf("Input: %d", n);
}
