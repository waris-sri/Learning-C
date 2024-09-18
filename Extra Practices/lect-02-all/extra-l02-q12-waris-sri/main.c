/*
---------- Lesson 02 Extra: Q12 -----------
Student ID: 6788112
Name: Waris
Surname: Sripatoomrak
Section: 3
-------------------------------------------
*/

#include <stdio.h>

int main(void) {
  // Similar to extra-l02-q07
  int hr;
  scanf("%d", &hr);
  if (hr <= 40) {
    printf("%d", hr * 50);
  } else {
    printf("%d", (40 * 50) + ((hr - 40) * 75));
  }
  return 0;
}
