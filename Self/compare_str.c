#import <stdio.h>
#import <string.h>

int main() {
  char str1[20], str2[20];
  fgets(str1, sizeof(str1), stdin);
  fgets(str2, sizeof(str2), stdin);
  if (strcmp(str1, str2) == 0) {
    printf("1 (Same strings)");
  } else {
    printf("0 (Not the same strings)");
  }
  return 0;
}
