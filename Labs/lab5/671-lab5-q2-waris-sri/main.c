#include <stdio.h>
int main() {
  int num, line;
  scanf("%d", &num);
  for (int i = 0; i < num; i++) {
    line = i;
    for (int j = 0; j <= i; j++) {
      printf("%d ", (line + 1) % 2);
      line++;
    }
    printf("\n");
  }
}
