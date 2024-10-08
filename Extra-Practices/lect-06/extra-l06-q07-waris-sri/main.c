/*
---------- Lesson 06 Extra: Q07 -----------
Student ID: 6788112
Name: Waris
Surname: Sripatoomrak
Section: 3
-------------------------------------------
*/

#include <math.h>
#include <stdio.h>

int main(void) {
  // Your code started here.
  int n;
  float avg, total = 0, sigma = 0;
  scanf("%d", &n);
  float arr[n];
  for (int i = 0; i < n; i++) {
    scanf(" %f", &arr[i]);
  }

  for (int i = 0; i < n; i++) {
    total += arr[i];
    avg = total / n;
  }
  printf("%.2f ", avg);

  for (int i = 0; i < n; i++) {
    sigma += pow((arr[i] - avg), 2);
  }
  // printf("sigma %f\n", sigma);

  float sd = sqrt(sigma / (n - 1));
  printf("%.2f", sd);

  return 0;
}
