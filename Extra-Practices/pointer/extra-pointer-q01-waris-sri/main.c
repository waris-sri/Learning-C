/*
--------- Pointer Extra: Sorting Array ----------
Student ID: 6788112
Name: Waris
Surname: Sripatoomrak
Section: 3
-------------------------------------------------
*/

#include <stdio.h>

int n;

// Insertion sort
void sort(int *array) {
  // Your code started here.
  for (int i = 1; i < n; i++) {
    int current = *(array + i); // pointer-array offset
    // the last sorted number is right behind the current index `i`
    int sorted_idx = i - 1;
    while (sorted_idx >= 0 && *(array + sorted_idx) > current) {
      *(array + sorted_idx + 1) = *(array + sorted_idx);
      sorted_idx = sorted_idx - 1;
    }
    *(array + sorted_idx + 1) = current;
  }
  for (int i = 0; i < n; i++) {
    if (i > 0)
      printf(", %d", array[i]);
    else
      printf("%d", array[i]);
  }
}

int main(void) {
  // Your code started here.
  scanf("%d", &n);
  int nums[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &nums[i]);
  }
  sort(nums);
  return 0;
}
