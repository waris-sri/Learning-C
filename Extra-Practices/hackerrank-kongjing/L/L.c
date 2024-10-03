#include <stdio.h>

int lcm(int a, int b) {
  int ans = 1;
  for (int i = 2; i <= a && i <= b;) {
    if (a % i == 0 && b % i == 0) {
      a /= i;
      b /= i;
      ans *= i;
      i = 2;
    } else {
      i++;
    }
  }
  return ans * a * b;
}

int main() {
  int n;
  scanf("%d", &n);
  int arr[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
  int res = arr[0];
  for (int i = 0; i < n; i++) {
    res = lcm(res, arr[i]);
  }
  printf("%d", res);
  return 0;
}
