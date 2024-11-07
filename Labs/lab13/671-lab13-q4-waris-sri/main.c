#include <stdio.h>
#include <string.h>

#define N 10

void swap(char *x, char *y) {
  char temp[N];
  strcpy(temp, x);
  strcpy(x, y);
  strcpy(y, temp);
}

int main(void) {
  char s1[10], s2[10], s3[10];
  scanf("%s", s1);
  scanf("%s", s2);
  scanf("%s", s3);
  if (strcmp(s1, s2) > 0) {
    swap(s1, s2);
  }
  if (strcmp(s2, s3) > 0) {
    swap(s2, s3);
  }
  if (strcmp(s1, s2) > 0) {
    swap(s1, s2);
  }
  printf("%s\n%s\n%s", s1, s2, s3);
  return 0;
}
