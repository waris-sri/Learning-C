/*
---------- Lesson 09 Extra: Q09 -----------
Student ID: 6788112
Name: Waris
Surname: Sripatoomrak
Section: 3
-------------------------------------------
*/

#include <stdio.h>

int isWinner(int num1, int num2, int winningSum) {
  return (num1 + num2 == winningSum) ? 1 : 0;
}

int main(void) {
  // Your code started here.
  int n1, n2, win;
  do {
    scanf("%d", &n1);
  } while (!(1 <= n1 && n1 <= 10));
  do {
    scanf("%d", &n2);
  } while (!(1 <= n2 && n2 <= 10));
  scanf("%d", &win);
  printf("%d", isWinner(n1, n2, win));
  return 0;
}
