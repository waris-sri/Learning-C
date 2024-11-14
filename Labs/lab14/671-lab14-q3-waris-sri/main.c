// YOUR CODE HERE
#include <stdio.h>

struct Food {
  char name[21];
  short meal;
  float cal;
};

int isFattyFood(struct Food f) {
  if (f.cal > 500)
    return 1;
  else
    return 0;
}

int main() {

  struct Food food[3];
  for (int i = 0; i < 3; i++) {
    scanf("%s", food[i].name);
    scanf("%hd", &food[i].meal);
    scanf("%f", &food[i].cal);
  }

  int cnt = 0;
  for (int i = 0; i < 3; i++) {
    int result = isFattyFood(food[i]);
    if (result == 1) {
      cnt++;
    }
  }

  if (cnt > 0) {
    printf("You have %d meal(s) exceed 500 cal.\n", cnt);
  } else {
    printf("No fatty food. You are good.\n");
  }

  return 0;
}
