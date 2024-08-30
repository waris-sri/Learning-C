#include <math.h>
#include <stdio.h>

int main() {
  float a, b, c, r1, r2, dis;
  int ctg;
  printf("Input a: ");
  scanf("%f", &a);
  printf("Input b: ");
  scanf("%f", &b);
  printf("Input c: ");
  scanf("%f", &c);
  dis = (b * b) - 4 * a * c;

  if (dis > 0) {
    ctg = 1; // two distinct roots
  } else if (dis == 0) {
    ctg = 0; // two same roots
  } else {
    ctg = -1; // negative roots
  }

  switch (ctg) {
  case 1:
    r1 = (-b + sqrt(dis)) / (2 * a);
    r2 = (-b - sqrt(dis)) / (2 * a);
    printf("Root 1: %.2f\n", r1);
    printf("Root 2: %.2f\n", r2);
    break;
  case 0:
    r1 = r2 = -b / (2 * a);
    printf("Root 1: %.2f\n", r1);
    printf("Root 2: %.2f\n", r2);
    break;
  case -1:
    printf("Negative roots");
    break;
  default:
    printf("Incorrect input!");
    break;
  }
  return 0;
}
