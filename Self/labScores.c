#include <stdio.h>

int main(void) {
  int scores[5][3], sum = 0;

  for (int i = 0; i < 5; i++) {
    printf("Student %d:\n", i + 1);
    for (int j = 0; j < 3; j++) {
      printf("Lab %d: ", j + 1);
      scanf("%d", &scores[i][j]);
    }
    printf("\n");
  }

  // average of all students and labs
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 3; j++) {
      sum += scores[i][j];
    }
  }
  printf("Average of Scores: %d\n", sum / 15);

  // max and min scores of all students and labs, and who got them
  int min = scores[0][0], max = scores[0][0];
  for (int i = 0; i < 5; i++) {
    for (int j = 1; j < 3; j++) {
      if (scores[i][j] < min) {
        min = scores[i][j];
      }
      if (scores[i][j] > max) {
        // printf("yes");
        max = scores[i][j];
      }
    }
  }
  printf("Max Score: %d\nMin Score: %d", max, min);
  // FIXME: max/min scores as in all labs, 1 student
  return 0;
}
