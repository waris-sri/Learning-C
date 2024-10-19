/*
---------- Lesson 07 Extra: Q09 -----------
Student ID: 6788112
Name: Waris
Surname: Sripatoomrak
Section: 3
-------------------------------------------
*/

#include <stdio.h>

int main(void) {
  int row, col;
  scanf("%d %d", &row, &col);
  int arr[row][col], search[row];

  for (int r = 0; r < row; r++) {
    for (int c = 0; c < col; c++) {
      scanf("%d", &arr[r][c]);
    }
  }

  printf("Input values to search for a column match\n");
  for (int r = 0; r < row; r++) {
    scanf("%d", &search[r]);
  }

  int match_col = -1;
  int cnt; // to keep track of matching elements
  for (int i = 0; i < col; i++) {
    cnt = 0; // reset cnt for each column
    // loop thru the columns top-down, equal to the amount of rows
    for (int j = 0; j < row; j++) {
      // j for ROW, i for COLUMN, we're now searching column by column
      if (arr[j][i] == search[j]) {
        cnt++;
      }
    }
    // if an entire column matches, record its column index
    if (cnt == row) {
      match_col = i;
      break;
    }
  }

  if (match_col != -1) {
    printf("Found a match at column %d\n", match_col);
    printf("Input new values\n");
    for (int i = 0; i < row; i++) {
      scanf("%d", &arr[i][match_col]);
    }
    // new matrix
    for (int i = 0; i < row; i++) {
      for (int j = 0; j < col; j++) {
        printf("%d ", arr[i][j]);
      }
      printf("\n");
    }
  } else {
    printf("Not found a match");
  }

  return 0;
}
