/*
---------- Lesson 05 Extra: Q02 -----------
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
    for (int j = 0; j <= i; j++) {
      printf("%d ", j + 1);
    }
    printf("\n");
  }
  return 0;
}
