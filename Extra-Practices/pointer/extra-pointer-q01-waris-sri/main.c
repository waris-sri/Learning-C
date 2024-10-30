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
    // pointer-array offset
    int current = *(array + i); // is `array[i]`
    // the last sorted number is right behind the current index `i`
    int sorted_idx = i - 1;
    // using pointer-array offset,
    // while value at `sorted_idx` is larger than `current`,
    while (sorted_idx >= 0 && *(array + sorted_idx) > current) {
      // shift it forward by one spot to make space for `current` to insert
      // `array[sorted_idx + 1] = array[sorted_idx]`
      *(array + sorted_idx + 1) = *(array + sorted_idx);
      // move to the previous element in the sorted portion
      // (start from right to left)
      sorted_idx = sorted_idx - 1;
    }
    // insert 'current' into its correct position within the sorted numbers
    // `array[sorted_idx + 1] = current`
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
