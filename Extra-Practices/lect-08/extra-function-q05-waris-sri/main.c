/*
---------- Lesson 09 Extra: Q05 -----------
Student ID: 6788112
Name: Waris
Surname: Sripatoomrak
Section: 3
-------------------------------------------
*/

#include <stdio.h>

int factorial(int n) {
  // Your code started here.
  if (n == 0 || n == 1)
    return 1;
  else
    return n * factorial(n - 1);
}

int main(void) {
  // Your code started here.
  int n;
  scanf("%d", &n);
  printf("%d", factorial(n));
  return 0;
}
