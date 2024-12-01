#include <stdio.h>
#include <string.h>

int main() {
  char str1[20], str2[20];
  fgets(str1, 20, stdin);
  char *pos1;
  if ((pos1 = strchr(str1, '\n')) != NULL) {
    *pos1 = '\0';
  }
  fgets(str2, 20, stdin);
  char *pos2;
  if ((pos2 = strchr(str2, '\n')) != NULL) {
    *pos2 = '\0';
  }

  int match = 0;
  for (int i = 0; i <= strlen(str2) - strlen(str1); i++) {
    match = 1;
    for (int j = 0; j < strlen(str1); j++) {
      if (str1[j] != str2[i + j]) {
        match = 0;
        break;
      }
    }
    if (match)
      break;
  }

  if (match == 1) {
    printf("Friend");
  } else {
    printf("Foe");
  }

  return 0;
}
