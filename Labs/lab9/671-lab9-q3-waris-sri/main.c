#include <stdio.h>

void print_c(int n, int m, char ch) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      printf("%c", ch);
    }
    printf("\n");
  }
}

int main() {
  int n, m;
  char ch;
  scanf("%d %d %c", &n, &m, &ch);
  print_c(n, m, ch);
  return 0;
}
