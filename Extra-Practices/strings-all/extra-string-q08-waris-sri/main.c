/*
---------- String Extra: Substring -----------
Student ID: 6788112
Name: Waris
Surname: Sripatoomrak
Section: 3
----------------------------------------------
*/

#include <ctype.h>
#include <stdio.h>
#include <string.h>

#define MAX 20

int main() {
  // Your code started here.
  char s1[MAX], s2[MAX];
  scanf("%s", s1);
  scanf("%s", s2);

  char s1_low[MAX], s2_low[MAX];
  for (int i = 0; s1[i]; i++) {
    s1_low[i] = tolower(s1[i]);
  }
  s1_low[strlen(s1)] = '\0';
  for (int i = 0; s2[i]; i++) {
    s2_low[i] = tolower(s2[i]);
  }
  s2_low[strlen(s2)] = '\0';

  int found = 0;
  int len1 = strlen(s1_low);
  int len2 = strlen(s2_low);

  if (len1 > len2) {
    printf("not found\n");
  }

  for (int i = 0; i <= len2 - len1; i++) {
    int match = 1;
    for (int j = 0; j < len1; j++) {
      if (s1_low[j] != s2_low[i + j]) {
        match = 0;
        break;
      }
    }
    if (match) {
      found = 1;
      printf("found at %d to %d positions\n", i, i + len1 - 1);
    }
  }

  if (!found) {
    printf("not found\n");
  }

  return 0;
}
