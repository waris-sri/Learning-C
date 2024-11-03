#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  int arr[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  int *p_max;

  ///// Start of you code /////
  // TODO: Point `p_max` to the element with the maximum value
  p_max = &arr[0];
  for (int i = 1; i < n; i++) {
    if (arr[i] > *p_max)
      p_max = &arr[i];
  }
  ///// End of you code /////

  printf("Replace max=%d with 42\n", *p_max);

  ///// Start of you code /////
  // TODO: Replace with max value with 42 using `p_max`
  *p_max = 42;
  ///// End of you code /////

  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }

  return 0;
}
