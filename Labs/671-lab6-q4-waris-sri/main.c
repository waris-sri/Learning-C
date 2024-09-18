// YOUR CODE HERE
#include <stdio.h>

int main() {
  int n, res = 0;
  scanf("%d", &n);
  int arr1[n], arr2[n];

  for (int i = 0; i < n; i++) {
    scanf("%d", &arr1[i]);
  }
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr2[i]);
  }

  for (int i = 0; i < n; i++) {
    res += arr1[i] * arr2[i];
  }

  printf("%d", res);
}
