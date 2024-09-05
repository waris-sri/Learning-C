#include <stdio.h>

int main() {
  int w;
  int h;
  char ch;
  scanf("%d %d %c", &w, &h, &ch);

  for (int i = 1; i <= w; i++) {
    for (int j = 1; j <= h; j++) {
      printf("%c ", ch);
    }
    printf("\n");
  }
}
