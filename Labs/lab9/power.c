#include <math.h>
#include <stdio.h>

float power(int n, int m) { return pow(n, m); }

int main() {
  int n, m;
  scanf("%d %d", &n, &m);
  printf("%f", power(n, m));
  return 0;
}
