/*
---------- Lesson 04 Extra: Q05 -----------
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
  if (n % 2 != 0)
    n--;
  for (int i = -n; i <= n; i += 2) {
    if (i != 0) {
      printf("%d ", i);
    }
  }
  return 0;
}
