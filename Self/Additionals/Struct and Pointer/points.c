// Calculate Distance Between Two Points Using Pointers

#include <math.h>
#include <stdio.h>

int main() {
  struct Points {
    double x;
    double y;
  };
  struct Points pt[2];
  for (int i = 0; i < 2; i++) {
    // tried to use the arrow operation
    scanf("%lf", &(pt + i)->x);
    scanf(" %lf", &(pt + i)->y);
  }

  float dist = sqrt(pow(((pt + 1)->x - (pt + 0)->x), 2) +
                    pow(((pt + 1)->y - (pt + 0)->y), 2));
  printf("Distance = %.2lf", dist);

  return 0;
}
