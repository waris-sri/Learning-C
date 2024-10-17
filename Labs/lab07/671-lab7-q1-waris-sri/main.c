// YOUR CODE HERE
#include <stdio.h>

int main(void) {
  int n, m;
  scanf("%d %d", &n, &m);
  // i = n = row, j = m = col
  int mat1[2][n][m];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      scanf("%d", &mat1[0][i][j]);
    }
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      scanf("%d", &mat1[1][i][j]);
    }
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      printf("%d ", mat1[0][i][j] + mat1[1][i][j]);
    }
    printf("\n");
  }
  return 0;
}
