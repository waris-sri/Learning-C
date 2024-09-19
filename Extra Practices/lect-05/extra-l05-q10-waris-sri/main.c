/*
---------- Lesson 05 Extra: Q10 -----------
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
  scanf("%d", &n);
  // upper
  for (int i = 0; i < n; i++) {
    for (int j = n - 1; j > i; j--) {
      printf(" ");
    }
    printf("/");
    // lower
    for (int k = 0; k < 2 * i; k++) {
      printf(" ");
    }
    printf("\\\n");
  }
  return 0;
}
