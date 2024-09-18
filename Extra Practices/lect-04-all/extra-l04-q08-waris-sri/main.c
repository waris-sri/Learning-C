/*
---------- Lesson 04 Extra: Q08 -----------
Student ID: 6788112
Name: Waris
Surname: Sripatoomrak
Section: 3
-------------------------------------------
*/

#include <stdio.h>

int main(void) {
  // Your code started here.
  int n, m;
  scanf("%d %d", &n, &m);
  for (int i = 1; i <= 1000; i++) {
    if (m < n && i % n == m) {
      printf("%d ", i);
    }
  }
  return 0;
}
