// YOUR CODE HERE
#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  int nums[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &nums[i]);
  }
  int min = nums[1], max = nums[0];
  for (int i = 1; i < n; i += 2) {
    if (nums[i] < min) {
      min = nums[i];
    }
  }
  for (int i = 0; i < n; i += 2) {
    if (nums[i] > max) {
      max = nums[i];
    }
  }
  printf("%d %d", min, max);
}
