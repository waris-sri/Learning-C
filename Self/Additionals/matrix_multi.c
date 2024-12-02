#include <stdio.h>

int main() {
  int m1_col, m1_row, m2_col, m2_row, prod;
  printf("m1_row: ");
  scanf("%d", &m1_row);
  printf("m1_col: ");
  scanf(" %d", &m1_col);
  do {
    printf("m2_row: ");
    scanf(" %d", &m2_row);
    printf("m2_col: ");
    scanf(" %d", &m2_col);
    if (m1_col != m2_row) {
      printf("`m1_col` must be equal to `m2_row`, retry.\n");
    }
  } while (m1_col != m2_row);

  int m1[m1_row][m1_col];
  int m2[m2_row][m2_col];
  int res[m1_row][m2_col];

  printf("Enter elements of matrix #1:\n");
  for (int i = 0; i < m1_row; i++) {
    for (int j = 0; j < m1_col; j++) {
      scanf(" %d", &m1[i][j]);
    }
  }
  printf("Enter elements of matrix #2:\n");
  for (int i = 0; i < m2_row; i++) {
    for (int j = 0; j < m2_col; j++) {
      scanf(" %d", &m2[i][j]);
    }
  }

  printf("Resultant matrix:\n");
  for (int i = 0; i < m1_row; i++) {
    for (int j = 0; j < m2_col; j++) {
      // initialize all values in it to 0 to remove garbage values
      res[i][j] = 0;
      for (int k = 0; k < m1_col; k++) {
        prod = m1[i][k] * m2[k][j];
        res[i][j] += prod;
      }
      printf("%d ", res[i][j]);
    }
    printf("\n");
  }

  return 0;
}
