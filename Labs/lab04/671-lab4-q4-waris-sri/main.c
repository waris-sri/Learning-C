// Online C compiler to run C program online
#include <stdio.h>

int main() {
  int score;
  do {
    scanf("%d", &score);
    if (score >= 70 && score <= 100) {
      printf("Outstanding");
      break;
    } else if (score >= 50 && score < 70) {
      printf("Pass");
      break;
    } else if (score >= 0 && score < 50) {
      printf("Fail");
      break;
    } else {
      printf("invalid score\n");
    }
  } while (1);
  return 0;
}
