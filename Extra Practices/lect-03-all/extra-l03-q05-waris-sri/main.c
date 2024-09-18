/*
---------- Lesson 03 Extra: Q05 -----------
Student ID: 6788112
Name: Waris
Surname: Sripatoomrak
Section: 3
-------------------------------------------
*/

#include <stdio.h>

int main(void) {
  // Your code started here.
  int score, cnt = 0;
  float total, avg;
  do {
    scanf("%d", &score);
    if (score >= 0 && score <= 100) {
      total += score;
      cnt++;
    }
  } while (score != -1);
  avg = total / cnt;
  if (avg > 50) {
    printf("%.2f Pass", avg);
  } else {
    printf("%.2f Fail", avg);
  }
  return 0;
}
