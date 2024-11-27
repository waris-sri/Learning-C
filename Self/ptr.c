#include <stdio.h>
#define N 5

void min(int *a, int *b, int *c) {
  // compare the VALUES dereferenced FROM the pointers
  if (*a <= *b && *a <= *c)
    printf("min = %d", *a);
  else if (*b <= *a && *b <= *c)
    printf("min = %d", *b);
  else
    printf("min = %d", *c);
}

void max(int *a, int *b, int *c) {
  if (*a >= *b && *a >= *c)
    printf("max = %d", *a);
  else if (*b >= *a && *b >= *c)
    printf("max = %d", *b);
  else
    printf("max = %d", *c);
}

// pass by reference
int find_max(int *arr, int n_elems) {
  int i;
  int max = *arr;
  for (i = 1; i < n_elems; i++) {
    if (*(arr + i) > max) {
      max = *(arr + i);
    }
  }
  return max;
}

void square(int *arr, int n) {
  for (int i = 0; i < n; i++) {
    arr[i] = arr[i] * arr[i];
  }
}

void calc_sum(int *ints, int m) {
  int sum = 0;
  for (int i = 0; i < m; i++) {
    sum += ints[i];
  }
  printf("calc_sum = %d", sum);
}

int main() {
  int a, b, c;
  printf("enter 3 nums: ");
  scanf("%d %d %d", &a, &b, &c);
  min(&a, &b, &c);
  printf("\n");
  max(&a, &b, &c);
  // using a/b/c as arguments will cause type mismatch,
  // since you're trying to pass integers to functions
  // that expect pointers to integers

  // pass by ref
  int nums[N] = {4, -5, 7, 99, 0};
  printf("\n\n{4, -5, 7, 99, 0}\n");
  printf("max from passing by ref = %d", find_max(nums, N));

  // for square
  printf("\n\nSquare: {-5, 3, 4, 1, 8}\n");
  int arr[5] = {-5, 3, 4, 1, 8};
  square(arr, 5);
  for (int i = 0; i < 5; i++) {
    printf("%d ", arr[i]);
  }

  // calc sum (of squared indices)
  int m = 5;
  int ints[m];
  printf("\n\nSum of squared indices:\n");
  for (int k = 0; k < m; k++) {
    ints[k] = k * k;
  }
  calc_sum(ints, m);

  return 0;
}
