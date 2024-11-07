#include <stdio.h>
#include <string.h>

#define MAX_LEN 10

void swap(char *x, char *y) {
  char temp[MAX_LEN]; // temp buffer to hold string during swap
  strcpy(temp, x);    // save x string to temp
  strcpy(x, y);       // copy y into x
  strcpy(y, temp);    // copy original x from temp into y
}

int main(void) {
  char s1[10], s2[10], s3[10];
  scanf("%s", s1);
  scanf("%s", s2);
  scanf("%s", s3);
  // if the 1st unmatched char is greater in s1 than s2
  if (strcmp(s1, s2) > 0) {
    swap(s1, s2);
  }
  if (strcmp(s2, s3) > 0) {
    swap(s2, s3);
  }
  // after swapping s2 and s3, s2's new value could now be less than s1
  // so we need to check s1 vs s2 one more time to ensure proper ordering
  // comparing s1 and s3 is unnecessary because:
  // - if s1 > s2 and s2 > s3, then s1 > s3 by transitivity
  // - if s1 < s2 and s2 > s3, we check s1 vs s2 again to ensure order
  if (strcmp(s1, s2) > 0) {
    swap(s1, s2);
  }
  printf("%s\n%s\n%s", s1, s2, s3);
  return 0;
}
