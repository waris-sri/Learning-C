/*
---------- Lesson 04 Extra: Q10 -----------
Student ID: 6788112
Name: Waris
Surname: Sripatoomrak
Section: 3
-------------------------------------------
*/

#include <stdio.h>

int main(void) {
  // Your code started here.
  int n;
  do {
    scanf("%d", &n);
    int a = 0, b = 1, next;

    // base cases
    if (n >= 1) {
      printf("0");
    }
    if (n >= 2) {
      printf(", 1");
    }

    for (int i = 2; i < n; i++) {
      next = a + b;
      printf(", %d", next);
      // update values
      a = b;
      b = next;
    }
    printf("\n");
  } while (n >= 0);
  return 0;
}
