/*
---------- Lesson 09 Extra: Q12 -----------
Student ID: 6788112
Name: Waris
Surname: Sripatoomrak
Section: 3
-------------------------------------------
*/

#include <assert.h>
#include <stdio.h>

// TODO: Place the function prototypes here
int sum(int x, int y);
int square(int x);
int array_sum(int arr[], int size);
float array_average(int arr[], int size);
int max(int x, int y);
int max_index(int arr[], int size);
int is_even(int x);
int is_prime(int x);
int power(int x, int e);

// ======================
// DO NO MODIFY
// Uncomment to test your program
int main(void) {
  // Test 1
  assert(sum(2, 3) == 5);
  assert(sum(-2, 5) == 3);
  assert(sum(0, 0) == 0);
  printf("Q1: Passed\n");

  // Test 2
  assert(square(4) == 16);
  assert(square(-3) == 9);
  assert(square(0) == 0);
  printf("Q2: Passed\n");

  // Test 3
  int arr1[] = {1, 2, 3, 4, 5};
  assert(array_sum(arr1, 5) == 15);
  int arr2[] = {0, -2, 3, 5};
  assert(array_sum(arr2, 4) == 6);
  int arr3[] = {0};
  assert(array_sum(arr3, 1) == 0);
  printf("Q3: Passed\n");

  // Test 4
  int arr4[] = {1, 2, 3, 4, 5};
  assert(array_average(arr4, 5) == 3.0);
  int arr5[] = {0, -2, 3, 5};
  assert(array_average(arr5, 4) == 1.5);
  int arr6[] = {0};
  assert(array_average(arr6, 1) == 0.0);
  printf("Q4: Passed\n");

  // Test 5
  assert(max(2, 3) == 3);
  assert(max(-2, 5) == 5);
  assert(max(0, 0) == 0);
  printf("Q5: Passed\n");

  // Test 6
  int arr7[] = {1, 2, 3, 4, 5};
  assert(max_index(arr7, 5) == 4);
  int arr8[] = {0, -2, 3, 5};
  assert(max_index(arr8, 4) == 3);
  int arr9[] = {0};
  assert(max_index(arr9, 1) == 0);
  printf("Q6: Passed\n");

  // Test 7
  assert(is_even(2) == 1);
  assert(is_even(5) == 0);
  assert(is_even(0) == 1);
  printf("Q7: Passed\n");

  // Test 8
  assert(is_prime(2) == 1);
  assert(is_prime(7) == 1);
  assert(is_prime(9) == 0);
  printf("Q8: Passed\n");

  // Test 9
  assert(power(2, 3) == 8);
  assert(power(-2, 5) == -32);
  assert(power(0, 0) == 1);
  printf("Q9: Passed\n");

  return 0;
}
// ======================

// TODO: Place the functions here
int sum(int x, int y) { return x + y; }

int square(int x) { return x * x; }

int array_sum(int arr[], int size) {
  int sum = 0;
  for (int i = 0; i < size; i++) {
    sum += arr[i];
  }
  return sum;
}

float array_average(int arr[], int size) {
  float sum = 0;
  for (int i = 0; i < size; i++) {
    sum += arr[i];
  }
  return sum / size;
}

int max(int x, int y) { return (x > y) ? x : y; }

int max_index(int arr[], int size) {
  int max = arr[0], index = 0;
  for (int i = 0; i < size; i++) {
    if (arr[i] > max) {
      max = arr[i];
      index = i;
    }
  }
  return index;
}

int is_even(int x) { return (x % 2 == 0) ? 1 : 0; }

int is_prime(int x) {
  for (int i = 2; i <= x / 2; i++) {
    if (x % i == 0) {
      return 0;
      break;
    }
  }
  return 1;
}

int power(int x, int e) {
  if (e == 0)
    return 1;
  int res = 1;
  for (int i = 0; i < e; i++) {
    res *= x;
  }
  return res;
}
