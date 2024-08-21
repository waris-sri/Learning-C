/*
---------- Lesson 01 Extra: Q04 -----------
Student ID: 6788112
Name: Waris
Surname: Sripatoomrak
Section: 3
-------------------------------------------
*/

#include <stdio.h>

int main(void) {
  // Your code started here.
  int a, b, c;
  scanf("%d %d", &a, &b);

  // Modulo is basically division stopping right before
  // the remainder becomes a float, and division is just
  // repeated subtraction. So, modulo is essentially
  // looping subtraction by using the first difference `c`
  // as the minuend `a` after the first subtraction (`c = a`).
  // Since the final difference must be positive, `c`, which is
  // now `a`, must be greater than or equal to `b`.

  // Assign `c` to `a` since `a` is going to be replaced anyway.
  c = a; // If a = 9 and b = 4, then c = 9
  while (c >= b) {
    c = c - b; // c = 9 - 4 = 5, then c = 5 - 4 = 1
  }
  printf("%d", c);
  return 0;
}
