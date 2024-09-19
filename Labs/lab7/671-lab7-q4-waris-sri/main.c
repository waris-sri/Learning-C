// YOUR CODE HERE
#include <stdio.h>

int main(void) {
  int n, m;
  scanf("%d %d", &n, &m);
  // i = n = row, j = m = col
  int mat[n][m], tra[m][n];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      scanf("%d", &mat[i][j]);
    }
  }
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      tra[i][j] = mat[j][i];
      printf("%d ", tra[i][j]);
    }
    printf("\n");
  }
  return 0;
}
