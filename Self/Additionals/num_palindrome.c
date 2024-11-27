#include <stdio.h>
#include <string.h>

#define MAX 100

int main() {
  char n[MAX];
  int is_pal = 1;
  scanf("%s", n);
  int len = strlen(n);
  for (int i = 0; i < len / 2; i++) {
    if (!(n[i] == n[len - i - 1])) {
      is_pal = 0;
    }
  }
  if (is_pal)
    printf("%s is a palindrome.", n);
  else
    printf("%s isn't a palindrome.", n);
  return 0;
}
