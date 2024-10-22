/*
---------- Lesson 09 Extra: Q08 -----------
Student ID: 6788112
Name: Waris
Surname: Sripatoomrak
Section: 3
-------------------------------------------
*/

#include <stdio.h>

#define N 5     // row
#define M 5     // column
int DATA[N][M]; // the array is a global variable

void scanArrayData() {
  //////////  Start of your code  //////////
  /*
    TODO: Scan the 2-D array data in here
  */
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      scanf("%d", &DATA[i][j]);
    }
  }
  //////////  End of your code  //////////
}

int count_odd(int a, int b) {
  //////////  Start of your code  //////////
  /*
    TODO: This function counts the number of odd values between a and b.
  */
  if (a % 2 != 0 || b % 2 != 0)
    return ((b - a) / 2) + 1;
  else
    return ((b - a) / 2);
  //////////  End of your code  //////////
}

int match(int t, int v) {

  int ismatch;

  //////////  Start of your code  //////////
  /*
    TODO: Write an algorithm to confirm the match between the target 't' and the
    value in DATA array 'v'
  */
  if (t == v)
    ismatch = 1;
  else
    ismatch = 0;
  //////////  End of your code  //////////
  return ismatch;
}

int main() {
  int n1, n2;
  scanf("%d", &n1);
  scanf("%d", &n2);
  // set target to the returned value from count_odd function
  int target = count_odd(n1, n2);
  // printf("\nTARGET = %d\n", target);
  scanArrayData();

  //////////  Start of your code  //////////

  /*
    TODO: Write a program that uses the function match to check the match of the
    data in the array and the target. You are not allowed to compare the value
    directly without calling the match function
  */
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      if (match(target, DATA[i][j]) == 1) {
        printf("The target has been found at position[%d %d]\n", i, j);
      }
    }
  }
  //////////  End of your code  //////////

  return 0;
}
