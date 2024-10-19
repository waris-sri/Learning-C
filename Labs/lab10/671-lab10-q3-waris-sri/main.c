#include <stdio.h>

int DATA[8] = {0, 1, 2, 6, 7, 5, 4, 3};
int max_y = 0;
int i = 0;

int times(int i) { return DATA[i] * DATA[i + 1]; }

void loop(int len) {
  int y;
  len = len - 1;
  for (int i = 0; i < len; i++) {
    y = times(i);
    if (max_y < y) {
      max_y = y;
    }
  }
}

int main() {
  loop(8);
  printf("The answer is %d\n", max_y);
  return 0;
}
