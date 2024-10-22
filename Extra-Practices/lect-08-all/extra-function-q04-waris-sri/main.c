/*
---------- Lesson 09 Extra: Q04 -----------
Student ID: 6788112
Name: Waris
Surname: Sripatoomrak
Section: 3
-------------------------------------------
*/

#include <math.h>
#include <stdio.h>

#define PI 3.14

void area_cal(char opt, float n1, float n2, float n3);

int main(void) {
  // Your code started here.
  char opt;
  float n1, n2, n3;
  scanf("%c", &opt);
  area_cal(opt, n1, n2, n3);
  return 0;
}

void area_cal(char opt, float n1, float n2, float n3) {
  // Your code started here.
  switch (opt) {
  case 'S':
    scanf("%f", &n1);
    printf("Hi! The area of Square is equal to %.2f.", pow(n1, 2));
    break;
  case 'R':
    scanf("%f %f", &n1, &n2);
    printf("Hi! The area of Rectangle is equal to %.2f.", (n1 * n2));
    break;
  case 'C':
    scanf("%f", &n1);
    printf("Hi! The area of Circle is equal to %.2f.", PI * pow(n1, 2));
    break;
  case 'T':
    scanf("%f %f", &n1, &n2);
    printf("Hi! The area of Triangle is equal to %.2f.", 0.5 * n1 * n2);
    break;
  case 'Z':
    scanf("%f %f %f", &n1, &n2, &n3);
    printf("Hi! The area of Trapezoid is equal to %.2f.",
           (0.5 * (n1 + n2)) * n3);
    break;
  default:
    printf("Sorry, I have no idea TT.");
  }
}
