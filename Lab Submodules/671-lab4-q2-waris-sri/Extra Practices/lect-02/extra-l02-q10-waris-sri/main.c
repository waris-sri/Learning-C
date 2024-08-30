/*
---------- Lesson 02 Extra: Q10 -----------
Student ID: 6788112
Name: Waris
Surname: Sripatoomrak
Section: 3
-------------------------------------------
*/

#include <stdio.h>

int main(void) {
  // Your code started here.
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);
  if ((a >= 0 && b >= 0 && c >= 0) && (a + b + c == 180)) {
    if (a == 90 || b == 90 || c == 90) {
      printf("Right triangle");
    } else if (a > 90 || b > 90 || c > 90) {
      printf("Obtuse triangle");
    } else if (a < 90 && b < 90 && c < 90) {
      printf("Acute triangle");
    }
  } else {
    printf("Not a triangle");
  }
  return 0;
}
