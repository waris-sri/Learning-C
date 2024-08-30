#include <stdio.h>

int main() {
  int start, end, step;
  scanf("%d %d %d", &start, &end, &step);
  for (int i = start; i <= end; i += step) {
    if (i + step <= end) {
      printf("%d-", i);
    } else {
      printf("%d", i);
    }
  }
}
