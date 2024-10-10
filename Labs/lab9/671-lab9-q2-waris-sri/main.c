#include <stdio.h>

void print_c(int n, char ch) {
  for (int i = 0; i < n; i++) {
    printf("%c", ch);
  }
}

int main() {
  int n;
  char ch;
  scanf("%d %c", &n, &ch);
  print_c(n, ch);
  return 0;
}
