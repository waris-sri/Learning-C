#include <stdio.h>
#include <string.h>

#define MAX 100

int main() {
  char str[MAX];
  fgets(str, MAX, stdin);
  int len = strlen(str);

  char *pos;
  if ((pos = strchr(str, '\n')) != NULL)
    *pos = '\0';

  for (int i = len - 1; i >= 0; i--) {
    printf("%c", *(str + i));
  }
  return 0;
}
