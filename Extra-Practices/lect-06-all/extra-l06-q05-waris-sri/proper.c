/*
---------- Lesson 06 Extra: Q05 -----------
Student ID: 6788112
Name: Waris
Surname: Sripatoomrak
Section: 3
-------------------------------------------
*/

#include <stdio.h>

// Proper version; actually pushes zeroes to the end
// Use the one traversal method
int main(void) {
  // Your code started here.
  int arr[10], cnt = 0;
  for (int i = 0; i < 10; i++) {
    scanf("%d", &arr[i]);
  }

  for (int i = 0; i < 10; i++) {
    if (arr[i] != 0) {
      int tmp = arr[i];
      arr[i] = arr[cnt];
      arr[cnt] = tmp;
      cnt++;
    }
  }

  for (int i = 0; i < 10; i++) {
    if (i > 0)
      printf(", %d", arr[i]);
    else
      printf("%d", arr[i]);
  }

  return 0;
}
