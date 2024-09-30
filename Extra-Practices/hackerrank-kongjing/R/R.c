#include <stdio.h>

int main() {
  int row, col;
  scanf("%d %d", &row, &col);

  int arr[row][col];
  for (int r = 0; r < row; r++) {
    for (int c = 0; c < col; c++) {
      scanf("%d", &arr[r][c]);
    }
  }

  int target;
  scanf("%d", &target);

  for (int r = 0; r < row; r++) {
    for (int c = 0; c < col; c++) {
      if (arr[r][c] == target) {
        for (int i = 0; i < col; i++) {
          arr[r][i] = -1;
        }
        break; // move to the next row since it's already marked
      }
    }
  }

  int new_row_count = 0;
  for (int r = 0; r < row; r++) {
    if (arr[r][0] != -1) {
      new_row_count++;
    }
  }

  if (new_row_count == 0) {
    printf("The Matrix is empty after removal");
    return 0;
  }

  int new_matrix[new_row_count][col];
  int new_row_index = 0;

  for (int r = 0; r < row; r++) {
    if (arr[r][0] != -1) {
      for (int c = 0; c < col; c++) {
        new_matrix[new_row_index][c] = arr[r][c];
      }
      new_row_index++;
    }
  }

  for (int r = 0; r < new_row_count; r++) {
    for (int c = 0; c < col; c++) {
      printf("%d ", new_matrix[r][c]);
    }
    printf("\n");
  }
}
