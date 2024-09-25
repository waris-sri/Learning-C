/*
---------- Lesson 03 Extra: Q11 -----------
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
  int sum = 0;
  scanf("%d", &n);
  if (n <= 0) {
    printf("Invalid input");
  } else {
    for (int i = 0; i < n; i++) {
      int val;
      // Space in front to skip reading whitespaces and newlines
      scanf(" %d", &val);
      if (val % 7 == 0) {
        sum += val;
      }
    }
    printf("%d", sum);
  }
  return 0;
}
