/*
---------- Lesson 06 Extra: Q04 -----------
Student ID: 6788112
Name: Waris
Surname: Sripatoomrak
Section: 3
-------------------------------------------
*/

#include <stdio.h>

int main(void) {
  // Basically "Two Sum"
  int n;
  scanf("%d", &n);

  int arr[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  int x;
  scanf("%d", &x);

  // Print array
  for (int i = 0; i < n; i++) {
    if (i >= 1)
      printf(", %d", arr[i]);
    else
      printf("%d", arr[i]);
  }
  printf("\n");

  // Search and print
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if (arr[i] + arr[j] == x) {
        printf("%d %d\n", arr[i], arr[j]);
      }
    }
  }

  return 0;
}
