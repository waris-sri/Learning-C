/*
---------- Lesson 02 Extra: Q11 -----------
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
  if (n % 3 == 0 && n % 5 == 0 && n > 0) {
    printf("Fizz Buzz");
  } else if (n % 3 == 0 && n > 0) {
    printf("Fizz");
  } else if (n % 5 == 0 && n > 0) {
    printf("Buzz");
  } else {
    printf("Invalid");
  }
  return 0;
}
