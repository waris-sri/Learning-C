// YOUR CODE HERE
#include <stdio.h>

int main() {
  int n1, n2;
  char op;
  scanf("%d %d %c", &n1, &n2, &op);
  switch (op) {
  case '+':
    printf("%.2f", (float)n1 + n2);
    break;
  case '-':
    printf("%.2f", (float)n1 - n2);
    break;
  case '*':
    printf("%.2f", (float)n1 * n2);
    break;
  case '/':
    printf("%.2f", (float)n1 / n2);
    break;
  default:
    printf("Invalid operator!");
    break;
  }
  return 0;
}
