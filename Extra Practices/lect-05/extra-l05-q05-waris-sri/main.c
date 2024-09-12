/*
---------- Lesson 05 Extra: Q05 -----------
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
    for (int i = 0; i < n; i++) {
      for (int j = 0; j <= i; j++) {
        printf("&");
      }
      printf("\n");
    }
  } while (n <= 0);
  return 0;
}
