/*
---------- Lesson 07 Extra: Q01 -----------
Student ID: 6788112
Name: Waris
Surname: Sripatoomrak
Section: 3
-------------------------------------------
*/

#include <stdio.h>

int main(void) {
  // Your code started here.
  int r, c;
  scanf("%d %d", &r, &c);

  int arr[r][c];
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      arr[i][j] = 0;
    }
  }

  int x, xVal[c], index = 0;
  while (index < c) {
    scanf("%d", &x);
    if (x >= 0 && x < r) {
      xVal[index] = x;
      index++;
    } else {
      continue;
    }
  }

  for (int j = 0; j < c; j++) {
    x = xVal[j];
    arr[x][j] = 1;
  }

  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }

  return 0;
}
