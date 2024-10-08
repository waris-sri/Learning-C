/*
---------- Lesson 06 Extra: Q06 -----------
Student ID: 6788112
Name: Waris
Surname: Sripatoomrak
Section: 3
-------------------------------------------
*/

#include <stdio.h>

int main(void) {
  // Your code started here.
  float arr[5];
  for (int i = 0; i < 5; i++) {
    scanf("%f ", &arr[i]);
  }

  float x;
  scanf("%f", &x);

  char res[5];
  for (int i = 0; i < 5; i++) {
    if (arr[i] < x) {
      res[i] = 's';
    } else if (arr[i] > x) {
      res[i] = 'g';
    } else {
      res[i] = 'e';
    }
  }

  for (int i = 0; i < 5; i++) {
    if (i > 0)
      printf(", %c", res[i]);
    else
      printf("%c", res[i]);
  }

  return 0;
}
