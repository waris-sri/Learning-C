/*
---------- Lesson 03 Extra: Q09 -----------
Student ID: 6788112
Name: Waris
Surname: Sripatoomrak
Section: 3
-------------------------------------------
*/

#include <stdio.h>

int main(void) {
  // Your code started here.
  int n, original, digits = 0;
  scanf("%d", &n);
  original = n; // Keep the value of `n`

  // Find number of digits
  do {
    // Keep removing the last digit by dividing with 10 until `n` becomes 0
    // NOTE: n's value is now changed, use `original`
    // for further processing instead
    n /= 10;
    digits++;
  } while (n != 0);

  int last = original % 10;
  int first;
  while (original >= 10) { // `original >= 10` because 0 to 9 has 1 digit
    original /= 10;
  }
  first = original;

  printf("%d ", digits);
  printf("%d ", first);
  printf("%d ", last);
  printf("%d", first + last);

  return 0;
}
