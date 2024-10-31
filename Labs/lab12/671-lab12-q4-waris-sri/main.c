#include <stdio.h>

// please write your method here
void findmax(int *a, int *b, int *c, int *max) {
  if (*a >= *b && *a >= *c)
    *max = *a;
  else if (*b >= *a && *b >= *c)
    *max = *b;
  else
    *max = *c;
}

int main(void) {
  // do nothing in main()
  int n1, n2, n3, max = 0;
  scanf("%d %d %d", &n1, &n2, &n3);
  findmax(&n1, &n2, &n3, &max);
  printf("%d", max);
  return 0;
}
