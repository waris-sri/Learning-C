/*
---------- Lesson 09 Extra: Q02 -----------
Student ID: 6788112
Name: Waris
Surname: Sripatoomrak
Section: 3
-------------------------------------------
*/

#include <stdio.h>

void upper_bun(int p) {
  // Your code started here.
  printf("    ");
  for (int j = 0; j < ((4 * p) - 4); j++) {
    printf("B ");
  }
  printf("\n");
  for (int i = 0; i < 2; i++) {
    printf("  ");
    for (int j = 0; j < ((4 * p) - 2); j++) {
      printf("B ");
    }
    printf("\n");
  }
}

void patties(int p, int isCheese) {
  // Your code started here.
  for (int i = 0; i < p; i++) {
    for (int j = 0; j < p * 4; j++) {
      printf("* ");
    }
    if (isCheese == 1) {
      printf("\n");
      for (int j = 0; j < p * 4; j++) {
        printf("- ");
      }
    }
    printf("\n");
  }
}

void lower_bun(int p) {
  // Your code started here.
  for (int i = 0; i < 2; i++) {
    printf("  ");
    for (int j = 0; j < ((4 * p) - 2); j++) {
      printf("B ");
    }
    printf("\n");
  }
}

int main(void) {
  // Your code started here.
  int p, isCheese;
  do {
    scanf("%d %d", &p, &isCheese);
  } while (p < 1 && (isCheese == 1 || isCheese == 0));

  upper_bun(p);
  patties(p, isCheese);
  lower_bun(p);
  return 0;
}
