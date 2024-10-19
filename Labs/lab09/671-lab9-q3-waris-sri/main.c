#include <stdio.h>

void print_c(int n, char ch) {
  for (int i = 0; i < n; i++) {
    printf("%c", ch);
  }
}

int main() {
  int n, m;
  char ch;
  scanf("%d %d %c", &n, &m, &ch);
  for (int i = 0; i < n; i++) {
      print_c(m, ch);
      printf("\n");
  }
  return 0;
}
