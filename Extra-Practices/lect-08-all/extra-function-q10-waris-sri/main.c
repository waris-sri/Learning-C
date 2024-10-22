/*
---------- Lesson 09 Extra: Q10 -----------
Student ID: 6788112
Name: Waris
Surname: Sripatoomrak
Section: 3
-------------------------------------------
*/

#include <stdio.h>

void print_triangle(int rows) {
  for (int i = 1; i <= rows; i++) {
    for (int j = 1; j <= i; j++) {
      printf("* ");
    }
    printf("\n");
  }
}

void print_rectangle(int width, int height) {
  for (int i = 1; i <= height; i++) {
    for (int j = 1; j <= width; j++) {
      printf("* ");
    }
    printf("\n");
  }
}

void print_diamond(int size) {
  if (size % 2 == 0) {
    size++; // Ensure odd size for proper hexagon shape
  }
  int halfSize = size / 2;
  for (int y = -halfSize; y <= halfSize; y++) {
    for (int x = -halfSize; x <= halfSize; x++) {
      if (x >= -y - halfSize && x <= y + halfSize && x >= y - halfSize &&
          x <= -y + halfSize) {
        printf("* ");
      } else {
        printf("  ");
      }
    }
    printf("\n");
  }
}

int main(void) {
  // TODO Make function calls here
  print_diamond(3);
  print_rectangle(10, 2);
  print_triangle(3);
  print_rectangle(3, 2);
  print_triangle(7);
  print_rectangle(7, 2);
  print_diamond(5);
  print_diamond(5);
  return 0;
}
