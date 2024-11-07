#include <stdio.h>
#include <string.h>

#define MAX_LEN 10

int main(void) {
  // `+1` for `\0`
  char s1[MAX_LEN + 1], s2[MAX_LEN + 1], s3[MAX_LEN + 1];
  char all[MAX_LEN * 3 + 3];
  scanf("%s", s1);
  scanf("%s", s2);
  scanf("%s", s3);
  strcpy(all, "");
  strcat(all, s1);
  strcat(all, ",");
  strcat(all, s2);
  strcat(all, ",");
  strcat(all, s3);
  printf("%s", all);
  return 0;
}
