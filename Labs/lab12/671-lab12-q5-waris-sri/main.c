#include <stdio.h>

// write the functions here
void swap(int *x, int *y) {
  // If temp is not initialized with *x first:
  // 1. Original value of *x would be lost when *x = *y
  // 2. Setting *y = temp would copy garbage value into *y
  // 3. The swap would fail and values would be corrupted
  int temp = *x;
  *x = *y;
  *y = temp;
}
void sort_values(int *x, int *y, int *z) {
  if (*x > *y)
    swap(x, y);
  if (*y > *z)
    swap(y, z);
  // after swapping y and z, y's new value could now be less than x
  // so we need to check x vs y one more time to ensure proper ordering
  // comparing x and z is unnecessary because:
  // - if x > y and y > z, then x > z by transitivity
  // - if x < y and y > z, we check x vs y again to ensure order
  if (*x > *y)
    swap(x, y);
}

int main(void) {
  //------the code is given here---//
  int n1, n2, n3;
  scanf("%d %d %d", &n1, &n2, &n3);
  sort_values(&n1, &n2, &n3);
  printf("%d %d %d", n1, n2, n3);
  return 0;
}
