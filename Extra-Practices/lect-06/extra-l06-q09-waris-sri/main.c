/*
---------- Lesson 06 Extra: Q09 -----------
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

  int a[n], b[n], c[n];
  for (int e = 0; e < n; e++) {
    scanf("%d", &a[e]);
  }
  for (int e = 0; e < n; e++) {
    scanf("%d", &b[e]);
  }

  for (int i = 0; i < n; i++) {
    if (a[i] > b[i]) {
      c[i] = 1;
    } else if (a[i] < b[i]) {
      c[i] = -1;
    } else {
      c[i] = 0;
    }
  }

  for (int e = 0; e < n; e++) {
    printf("%d ", c[e]);
  }

  return 0;
}
