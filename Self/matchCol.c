#include <stdio.h>

int main() {
  int row, col;
  printf("=-= Search and replace matching column in a matrix =-=\n");
  printf("Specify row and column size:\n");
  scanf("%d %d", &row, &col);
  int arr[row][col], search[row];

  printf("Input values for your matrix:\n");
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
    printf("Found a match at column #%d\n", match_col);
    printf("Input new values to replace:\n");
    for (int i = 0; i < row; i++) {
      scanf("%d", &arr[i][match_col]);
    }
    printf("New matrix:\n");
    for (int i = 0; i < row; i++) {
      for (int j = 0; j < col; j++) {
        printf("%d ", arr[i][j]);
      }
      printf("\n");
    }
  } else {
    printf("No match was found.");
  }

  return 0;
}
