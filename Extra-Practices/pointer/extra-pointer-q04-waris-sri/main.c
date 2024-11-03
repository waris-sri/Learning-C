/*
---------- Pointer Extra: Geometry Calculator -------------
Student ID:
Name:
Surname:
Section:
-----------------------------------------------------------
*/

#include <stdio.h>
#include <string.h>

#define MAX 20

void area_cal(char shape, char *shape_name, float *area) {
  float n1, n2, n3;
  if (shape == 'S') {
    scanf("%f", &n1);
    strcpy(shape_name, "Square");
    *area = n1 * n1;
    printf("Hi! The area of %s is equal to %.2f.", shape_name, *area);
  } else if (shape == 'R') {
    scanf("%f %f", &n1, &n2);
    strcpy(shape_name, "Rectangle");
    *area = n1 * n2;
    printf("Hi! The area of %s is equal to %.2f.", shape_name, *area);
  } else if (shape == 'C') {
    scanf("%f", &n1);
    strcpy(shape_name, "Circle");
    *area = 3.14 * n1 * n1;
    printf("Hi! The area of %s is equal to %.2f.", shape_name, *area);
  } else if (shape == 'T') {
    scanf("%f %f", &n1, &n2);
    strcpy(shape_name, "Triangle");
    *area = 0.5 * n1 * n2;
    printf("Hi! The area of %s is equal to %.2f.", shape_name, *area);
  } else if (shape == 'Z') {
    scanf("%f %f %f", &n1, &n2, &n3);
    strcpy(shape_name, "Trapezoid");
    *area = (0.5 * (n1 + n2)) * n3;
    printf("Hi! The area of %s is equal to %.2f.", shape_name, *area);
  }
}

int main(void) {
  char shape, shape_name[MAX];
  float area;
  scanf(" %c", &shape);
  if (shape == 'S' || shape == 'R' || shape == 'C' || shape == 'T' ||
      shape == 'Z') {
    area_cal(shape, shape_name, &area);
  } else {
    printf("Sorry, I have no idea TT.");
  }
  return 0;
}
