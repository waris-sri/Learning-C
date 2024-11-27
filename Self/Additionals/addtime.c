#include <stdio.h>

struct Time {
  int h;
  int m;
  int s;
};
typedef struct Time TIME;

int main() {
  TIME time_strct[2];
  for (int i = 0; i < 2; i++) {
    scanf("%d", &time_strct[i].h);
  }
  return 0;
}
