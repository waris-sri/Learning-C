/*
---------- Lesson 09 Extra: Q07 -----------
Student ID: 6788112
Name: Waris
Surname: Sripatoomrak
Section: 3
-------------------------------------------
*/

#include <stdio.h>

int n; // Global Variable

void christmas_triangle(int i) {
  // Your code started here.
  int max_width = 2 * n + 1;
  for (int k = 0; k <= i + 1; k++) {
    // Left spaces
    for (int s = 0; s < (max_width - (2 * k + 1)) / 2; s++) {
      printf(" ");
    }
    // Leaves
    for (int l = 0; l < 2 * k + 1; l++) {
      printf("*");
    }
    printf("\n");
  }
}

void christmas_base() {
  // Your code started here.
  int max_width = 2 * n + 1;
  for (int i = 0; i < 1; i++) {
    for (int j = 0; j < (max_width - 3) / 2; j++) {
      printf(" ");
    }
    printf("|||\n");
  }
}

int main(void) {
  // DO NOT MODIFY THIS CODE.
  do {
    scanf("%d", &n);
  } while (n <= 0);
  for (int i = 0; i < n; i++) {
    christmas_triangle(i);
  }
  christmas_base();
}
