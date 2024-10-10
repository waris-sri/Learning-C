#include <math.h>
#include <stdio.h>

double math_func(double a, double b) { return pow(a, 2) - (2 * a * b) - 42; }

int main() {
  double a, b;
  scanf("%lf %lf", &a, &b);
  printf("%.2lf", math_func(a, b));
  return 0;
}
