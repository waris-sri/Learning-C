/*
---------- Lesson 06 Extra: Q01 -----------
Student ID: 6788112
Name: Waris
Surname: Sripatoomrak
Section: 3
-------------------------------------------
*/

#include <stdio.h>

int main(void) {
  // Your code started here.
  int k, sum = 0;
  scanf("%d", &k);

  int a[k];
  for (int i = 0; i < k; i++) {
    scanf("%d", &a[i]);
    sum += a[i];
  }

  printf("%d", sum);

  return 0;
}
