/*
---------- Lesson 07 Extra: Q08 -----------
Student ID: 6788112
Name: Waris
Surname: Sripatoomrak
Section: 3
-------------------------------------------
*/

#include <stdio.h>

int main(void) {
  // Your code started here.
  char select[3];    /* Y/N */
  int select_bin[6]; /* turning yes's and no's into (1,0) and (0,1) */
  for (int i = 0; i < 3; i++) {
    scanf(" %c", &select[i]);
    if (select[i] == 'y') {
      select_bin[2 * i] = 1;
      select_bin[2 * i + 1] = 0;
    } else {
      select_bin[2 * i] = 0;
      select_bin[2 * i + 1] = 1;
    }
  }

  int code[3];
  for (int i = 0; i < 3; i++) {
    scanf(" %d", &code[i]);
  }

  /* 3 loops because 3 arrays */
  int dot[4] = {0};
  /* sliding window of width 3, resulting in 4 slices */
  for (int i = 0; i < 4; i++) {
    dot[i] = 0; /* reset dot product value for each slice */
    // printf("%d ", select_bin[j]);
    /* for 3 integers in `code` */
    for (int j = 0; j < 3; j++) {
      dot[i] += select_bin[i + j] * code[j];
    }
  }

  int dotsum = 0;
  for (int i = 0; i < 4; i++) {
    dotsum += dot[i];
  }
  // printf("dotsum = %d\n", dotsum);

  /* print all out */
  for (int i = 0; i < 6; i++) {
    printf("%d ", select_bin[i]);
  }
  printf("\n");

  for (int i = 0; i < 3; i++) {
    printf("%d ", code[i]);
  }
  printf("\n");

  for (int i = 0; i < 4; i++) {
    printf("%d ", dot[i]);
  }
  printf("\n");

  if (dotsum > 0) {
    printf("Espresso");
  } else if (dotsum < 0) {
    printf("Latte");
  } else {
    printf("Americano");
  }

  return 0;
}
