/*
---------- Lesson 03 Extra: Q07 -----------
Student ID: 6788112
Name: Waris
Surname: Sripatoomrak
Section: 3
-------------------------------------------
*/

#include <stdio.h>

int main(void) {
  // Your code started here.
  int a, b, sum = 0;
  scanf("%d %d", &a, &b);
  for (int i = a; i <= b; i++) {
    sum += i;
  }
  printf("%d", sum);
  return 0;
}
