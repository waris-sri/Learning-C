/*
---------- Lesson 07 Extra: Q02 -----------
Student ID: 6788112
Name: Waris
Surname: Sripatoomrak
Section: 3
-------------------------------------------
*/

#include <stdio.h>

int main(void) {
  // Your code started here.
  int n;
  scanf("%d", &n);
  int arr[n][n];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      scanf("%d", &arr[i][j]);
    }
  }
  // for (int i = 0; i < n; i++) {
  //   for (int j = 0; j < n; j++) {
  //     printf("%d ", arr[i][j]);
  //   }
  //   printf("\n");
  // }
  int det2, det3;
  switch (n) {
  case 2:
    det2 = (arr[0][0] * arr[1][1]) - (arr[0][1] * arr[1][0]);
    printf("%d", det2);
    break;
  case 3:
    det3 = (arr[0][0] * ((arr[1][1] * arr[2][2]) - (arr[1][2] * arr[2][1]))) -
           (arr[0][1] * ((arr[1][0] * arr[2][2]) - (arr[2][0] * arr[1][2]))) +
           (arr[0][2] * ((arr[1][0] * arr[2][1]) - (arr[1][1] * arr[2][0])));
    printf("%d", det3);
    break;
  default:
    printf("Invalid input");
  }
  return 0;
}
