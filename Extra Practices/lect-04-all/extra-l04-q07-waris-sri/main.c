/*
---------- Lesson 04 Extra: Q07 -----------
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
    printf("Invalid");
    return 0;
  }
  for (int i = 1; i <= n; i++) {
    if (i % 7 == 0 || i % 10 == 7) {
      continue;
    }
    printf("%d ", i);
  }
  return 0;
}
