#include <stdio.h>

int main() {
  int a1, a2, a3, sum = 0, isRight = 0;
  scanf("%d", &a1);
  scanf("%d", &a2);
  scanf("%d", &a3);

  switch ((a1 > 0 && a2 > 0 && a3 > 0) ? 1 : 0) {
  case 1:
    sum = a1 + a2 + a3;
    isRight = (a1 == 90 || a2 == 90 || a3 == 90) ? 1 : 0;

    switch (sum) {
    case 180:
      switch (isRight) {
      case 1:
        printf("Right triangle");
        break;
      case 0:
        printf("Not a Right triangle");
        break;
      }
      break;
    default:
      printf("Not a triangle");
    }
    break;
  case 0:
    printf("Not a triangle");
  }

  return 0;
}
