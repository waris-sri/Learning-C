#include <stdio.h>

void compute_avg(int *arr, int n);

int main(void) {
  int n;
  scanf("%d", &n);
  int arr[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
  compute_avg(arr, n);
  return 0;
}

void compute_avg(int *arr, int n) {
  float sum = 0;
  for (int i = 0; i < n; i++) {
    sum += arr[i];
  }
  printf("%.2f", sum / n);
}
