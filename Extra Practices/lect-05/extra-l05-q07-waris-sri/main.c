/*
---------- Lesson 05 Extra: Q07 -----------
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
  for (int i = 0; i < n; i++) {
    for (int j = n - 1; j > i; j--) {
      printf(" ");
    }
    for (int j = 0; j < n; j++) {
      printf("*");
    }
    printf("\n");
  }
  return 0;
}
