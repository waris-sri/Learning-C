// YOUR CODE HERE
#include <stdio.h>

int main() {
  float w1, w2, w3, w4;
  float h1, h2, h3, h4;
  scanf("%f %f %f %f", &w1, &w2, &w3, &w4);
  scanf("%f %f %f %f", &h1, &h2, &h3, &h4);
  printf("The average weight is %.2f kg.\n", (w1 + w2 + w3 + w4) / 4);
  printf("The average height is %.2f cm.", (h1 + h2 + h3 + h4) / 4);
  return 0;
}
