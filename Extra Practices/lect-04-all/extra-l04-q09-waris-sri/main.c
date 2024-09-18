/*
---------- Lesson 04 Extra: Q09 -----------
Student ID: 6788112
Name: Waris
Surname: Sripatoomrak
Section: 3
-------------------------------------------
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  // Your code started here.
  int ans, guess, cnt = 0;
  /*
  - rand() generates a random integer between 0 and its max value
    according to a seed
  - rand() uses the same default seed every time the program runs
    if we don't explicitly set new seeds
  - new seeds will be set according to the current UNIX timestamp
    using `time(NULL)` which refers to 1/1/1970
  */
  srand(time(NULL));
  ans = rand() % 100 + 1;
  printf("-=- Guess the number between 1 and 100 (inclusive) -=-\n");
  do {
    printf("Enter your guess >>> ");
    scanf("%d", &guess);
    if (guess > ans) {
      printf("✗ Too high! Try again.\n");
      cnt++;
    } else if (guess < ans) {
      printf("✗ Too low! Try again.\n");
      cnt++;
    } else {
      printf("✓ Correct! The answer is %d.\n", ans);
      printf("✓ It took you %d attempt(s).", cnt);
    }
  } while (guess != ans);
  return 0;
}
