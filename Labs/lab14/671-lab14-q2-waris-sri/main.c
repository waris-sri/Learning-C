// YOUR CODE HERE
#include <stdio.h>

int main() {
  struct Food {
    char name[21];
    short meal;
    float cal;
  };

  struct Food food[3];
  for (int i = 0; i < 3; i++) {
    scanf("%s", food[i].name);
    scanf("%hd", &food[i].meal);
    scanf("%f", &food[i].cal);
  }

  float calsum = 0;
  for (int i = 0; i < 3; i++) {
    calsum += food[i].cal;
  }
  printf("Total eat: %.2f\n", calsum);

  for (int i = 0; i < 3; i++) {
    if (i > 0) {
      printf(",");
    }
    printf("%hd-%s", food[i].meal, food[i].name);
  }
  printf("\n");

  return 0;
}
