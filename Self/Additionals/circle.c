#include <stdio.h>

#define PI 3.14159

struct Circle {
  float radius;
};

float area(struct Circle c) {
  float area = PI * c.radius * c.radius;
  return area;
}
float circum(struct Circle c) {
  float circum = 2 * PI * c.radius;
  return circum;
}

int main() {
  struct Circle c[2]; // Declare variables to store details for two circles
  for (int i = 0; i < 2; i++) {
    scanf("%f", &c[i].radius);
    float area_val = area(c[i]);
    float circum_val = circum(c[i]);
  }
  for (int i = 0; i < 2; i++) {
  }
  return 0;
}
