#include <stdio.h>
#define max(x, y) (((x) > (y)) ? (x) : (y))
// #define min(x, y) (((x) < (y)) ? (x) : (y))

int main() {
  int n;
  scanf("%d", &n);

  int arr[n], maxArea = 0, l = 0, r = n - 1;
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  while (l < r) {
    // CASE 1: left side is shorter than the right
    if (arr[l] < arr[r]) {
      maxArea = max(maxArea, arr[l] * (r - l));
      l++;
    } else {
      // CASE 2: left side is taller than the right
      maxArea = max(maxArea, arr[r] * (r - l));
      r--;
    }
  }

  printf("%d", maxArea);
  return 0;
}
