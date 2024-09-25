/*
---------- Lesson 06 Extra: Q02 -----------
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
  do {
    scanf("%d", &n);
  } while (!(n > 0));

  int a[n], b[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }
  for (int i = 0; i < n; i++) {
    scanf("%d", &b[i]);
  }

  int scoreA = 0, scoreB = 0;
  for (int i = 0; i < n; i++) {
    if (a[i] > b[i]) {
      scoreA += 3;
    } else if (a[i] < b[i]) {
      scoreB += 3;
    } else {
      scoreA += 1;
      scoreB += 1;
    }
  }

  printf("%d %d\n", scoreA, scoreB);
  if (scoreA > scoreB) {
    printf("A Wins!");
  } else if (scoreA < scoreB) {
    printf("B Wins!");
  } else {
    printf("It's a tie.");
  }

  return 0;
}
