#include <stdio.h>

int main() {
  struct Student {
    char name[50];
    int age;
    int total;
  };

  struct Student student[2];
  float sum = 0;
  char newline;

  for (int i = 0; i < 2; i++) {
    fgets(student[i].name, 50, stdin);
    scanf("%d", &student[i].age);
    scanf("%d", &student[i].total);
    // consume newline left by enter key press after entering number
    scanf("%c", &newline);
    sum += student[i].total;
  }

  for (int j = 0; j < 2; j++) {
    printf("Name %s", student[j].name);
    printf("Age %d\n", student[j].age);
    printf("Total %d\n", student[j].total);
  }

  float avg = sum / 2.0; // use 2.0 for floating point division
  printf("Both Avg %.2f\n", avg);

  return 0;
}
