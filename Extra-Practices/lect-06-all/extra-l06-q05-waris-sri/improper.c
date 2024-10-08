/*
---------- Lesson 06 Extra: Q05 -----------
Student ID: 6788112
Name: Waris
Surname: Sripatoomrak
Section: 3
-------------------------------------------
*/

#include <stdio.h>

// Improper version; skip zeroes and append later
int main(void) {
  // Your code started here.
  int arr[10];
  for (int i = 0; i < 10; i++) {
    scanf("%d", &arr[i]);
  }

  int cnt_zero = 0;
  int first_nonzero = 1;

  for (int i = 0; i < 10; i++) {
    if (arr[i] != 0) {
      if (first_nonzero) {
        printf("%d", arr[i]);
        first_nonzero = 0;
      } else {
        printf(", %d", arr[i]);
      }
    } else {
      cnt_zero++;
    }
  }

  for (int i = 0; i < cnt_zero; i++) {
    if (first_nonzero) {
      printf("0");
      first_nonzero = 0;
    } else {
      printf(", 0");
    }
  }

  return 0;
}
