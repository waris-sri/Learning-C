/*
---------- Lesson 03 Extra: Q10 -----------
Student ID: 6788112
Name: Waris
Surname: Sripatoomrak
Section: 3
-------------------------------------------
*/

#include <stdio.h>

// Try to implement Euclid's Algorithm using a recursive function
// Key points:
// - GCD of 2 numbers doesn't change if the larger number is replaced by its
//   remainder when divided by that smaller number
// - Any divisor of both a and b is also a divisor of b
//   and the remainder of a % b
int gcd(int a, int b) {
  if (b == 0)
    return a;
  return gcd(b, a % b);
}

int main(void) {
  // Your code started here.
  int a, b;
  scanf("%d %d", &a, &b);
  printf("%d\n", gcd(a, b));
  return 0;
}
