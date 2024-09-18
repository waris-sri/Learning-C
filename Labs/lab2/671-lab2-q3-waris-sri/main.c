// YOUR CODE HERE
#include <stdio.h>

int main() {
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);
  if (a == b && a == c && b == c) {
    printf("all the same");
  } else if (a != b && a != c && b != c) {
    printf("all different");
  } else {
    printf("neither");
  }
  return 0;
}
