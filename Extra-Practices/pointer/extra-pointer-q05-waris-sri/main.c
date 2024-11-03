/*
------ Pointer Extra: Factorial but Pointer ------
Student ID: 6788112
Name: Waris
Surname: Sripatoomrak
Section: 3
--------------------------------------------------
*/

#include <stdio.h>

void factorial(int n, int *total) {
  // Your code started here.
  if (n == 0 || n == 1)
    *total = 1;
  else {
    factorial(n - 1, total);
    *total = n * (*total);
  }
}

int main(void) {
  // Your code started here.
  int n, total;
  scanf("%d", &n);
  factorial(n, &total);
  printf("%d", total);
  return 0;
}
