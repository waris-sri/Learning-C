#include <stdio.h>

int main(void) {
  float scores[5][3];

  // input prompts
  for (int i = 0; i < 5; i++) {
    printf("Student %d:\n", i + 1);
    for (int j = 0; j < 3; j++) {
      printf("Lab %d: ", j + 1);
      scanf("%f", &scores[i][j]);
    }
    printf("\n");
  }

  printf("Results:\n");

  // average of all students and labs
  float sumAll = 0;
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 3; j++) {
      sumAll += scores[i][j];
    }
  }
  printf("Average Score: %.2f\n", sumAll / 15);

  // max and min scores of all students from all labs
  float min = scores[0][0], max = scores[0][0];
  for (int i = 0; i < 5; i++) {
    for (int j = 1; j < 3; j++) {
      if (scores[i][j] < min) {
        min = scores[i][j];
      }
      if (scores[i][j] > max) {
        max = scores[i][j];
      }
    }
  }
  printf("Global Maximum: %.2f\nGlobal Minimum: %.2f\n", max, min);

  // max and min scores from all labs, 1 student
  float sumRow[5] = {0};
  float sumEach = 0;
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 3; j++) {
      sumRow[i] += scores[i][j];
    }
    sumEach += sumRow[i];
  }
  float minStudent = sumRow[0], maxStudent = sumRow[0];
  int minStudentIndex, maxStudentIndex;
  for (int i = 0; i < 5; i++) {
    if (sumRow[i] < minStudent) {
      minStudent = sumRow[i];
      minStudentIndex = i;
    }
    if (sumRow[i] > maxStudent) {
      maxStudent = sumRow[i];
      maxStudentIndex = i;
    }
  }
  printf("Student %d scored the highest (%.2f).\n", maxStudentIndex + 1,
         maxStudent);
  printf("Student %d scored the lowest (%.2f).", minStudentIndex + 1,
         minStudent);

  return 0;
}
