/*
------ Pointer Extra: Multiply Even Number ------
Student ID: 6788112
Name: Waris
Surname: Sripatoomrak
Section: 3
--------------------------------------------------
*/

#include <stdio.h>

int multiply_even_numbers(int *arr, int n) {
  int product = 1;
  for (int i = 0; i < n; i++) {
    if (arr[i] % 2 == 0) {
      product *= arr[i];
    }
  }
  return product;
}

int main(void) {
  // Your code started here.
  int n;
  scanf("%d", &n);
  int arr[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
  printf("%d", multiply_even_numbers(arr, n));
  return 0;
}
