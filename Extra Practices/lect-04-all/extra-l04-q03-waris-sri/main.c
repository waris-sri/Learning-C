/*
---------- Lesson 04 Extra: Q03 -----------
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
  float res = 0;
  scanf("%d", &n);
  if (n == 0) {
    printf("0.00");
    return 0; // acts like `break`
  }
  for (int i = 1; i <= n; i++) {
    if (res == 0 && i != 1) {
      printf("1/%d", i);
    }
    if (res != 0 && i != 1) {
      printf(" + 1/%d", i);
    }
    if (i == 1) {
      printf("1");
    }
    res += 1.00 / i;
  }
  printf(" = %.2f", res);
  return 0;
}
