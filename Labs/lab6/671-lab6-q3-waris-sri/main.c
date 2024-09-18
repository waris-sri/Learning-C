// YOUR CODE HERE
#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  int arr[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
  int target;
  scanf("%d", &target);
  for (int i = 0; i < n; i++) {
    if (arr[i] == target) {
      printf("%d", i);
      break;
    }
    if (arr[i] != target && i == n - 1) {
      printf("Not found");
    }
  }
}
