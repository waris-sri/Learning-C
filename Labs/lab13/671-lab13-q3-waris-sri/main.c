#include <stdio.h>
#include <string.h>

#define N 10

int main(void) {
  char s1[N], s2[N], s3[N];
  scanf("%s", s1);
  scanf("%s", s2);
  scanf("%s", s3);
  if ((strcmp(s1, s2) == 0) && (strcmp(s2, s3) == 0)) {
    printf("all the same");
  } else if ((strcmp(s1, s2) != 0) && (strcmp(s2, s3) != 0) &&
             (strcmp(s1, s3) != 0)) {
    printf("all different");
  } else {
    printf("neither");
  }
  return 0;
}
