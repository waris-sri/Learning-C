/*
---------- Lesson 07 Extra: Q06 -----------
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
      scanf("%d", &arr[i][j]);
    }
  }

  int search;
  scanf("%d", &search);
  int res[r][c];
  int res_row = 0;

  for (int i = 0; i < r; i++) {
    int found = 0; // declare here for it to reset to 0 for each new row
    for (int j = 0; j < c; j++) {
      if (arr[i][j] == search) {
        found = 1;
        break;
      }
    }
    if (!found) {
      for (int j = 0; j < c; j++) {
        res[res_row][j] = arr[i][j];
      }
      res_row++;
    }
  }

  // printf("\nArr\n");
  // for (int i = 0; i < r; i++) {
  //   for (int j = 0; j < c; j++) {
  //     printf("%d ", arr[i][j]);
  //   }
  //   printf("\n");
  // }

  // printf("\nRes\n");
  if (res_row == 0) {
    printf("The Matrix is empty after removal.");
  } else {
    for (int i = 0; i < res_row; i++) {
      for (int j = 0; j < c; j++) {
        printf("%d ", res[i][j]);
      }
      printf("\n");
    }
  }

  return 0;
}
