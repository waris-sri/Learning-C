#include <stdio.h>

#define MIN_VAL -4
#define MAX_VAL 42

int clip_value(int v) {
  if (v < MIN_VAL) {
    return MIN_VAL;
  }
  if (v > MAX_VAL) {
    return MAX_VAL;
  }
  return v;
}

int main(void) {
  int n;
  scanf("%d", &n);
  int val[n];
  for (int i = 0; i < n; i++) {
    scanf(" %d", &val[i]);
  }
  for (int i = 0; i < n; i++) {
    val[i] = clip_value(val[i]);
    printf("%d ", val[i]);
  }
  return 0;
}
