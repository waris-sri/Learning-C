/*
---------- Lesson 03 Extra: Q01 -----------
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
  if (n <= 0) {
    printf("Unable to print the sequence");
  }
  for (int i = 2; i <= n; i = i + 2) {
    printf("%d ", i);
  }
  printf("\n");
  if (n % 2 != 0) {
    n--;
  }
  for (int i = n; i >= 2; i = i - 2) {
    printf("%d ", i);
  }
  return 0;
}
