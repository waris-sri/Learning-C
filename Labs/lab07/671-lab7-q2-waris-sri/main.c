// YOUR CODE HERE
#include <stdio.h>

int main(void) {
  int n, m;
  scanf("%d %d", &n, &m);
  // i = n = row, j = m = col
  int mat[n][m];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      scanf("%d", &mat[i][j]);
    }
  }
  int target, found = 0;
  scanf("%d", &target);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (mat[i][j] == target) {
        printf("[%d,%d] ", i, j);
        found = 1;
      }
    }
  }
  if (found == 0) {
    printf("Not found");
  }
  return 0;
}
