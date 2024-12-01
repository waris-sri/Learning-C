#include <stdio.h>
#include <string.h>

// TODO 1 Declare the function prototype
int containsKeyword(char *title, char *keyword);

int main() {
  int n;
  scanf("%d ", &n);
  char titles[n][51];
  char keywords[51];
  for (int i = 0; i < n; i++) {
    fgets(titles[i], 51, stdin);
    // need to trim `\n`
    char *pos;
    if ((pos = strchr(titles[i], '\n')) != NULL)
      *pos = '\0';
  }
  fgets(keywords, 100, stdin);
  // need to trim `\n`
  char *pos;
  if ((pos = strchr(keywords, '\n')) != NULL)
    *pos = '\0';

  int found = 0;
  // TODO 2 Call the function
  // Search for the keyword in each book title
  for (int i = 0; i < n; i++) {
    if (containsKeyword(titles[i], keywords) == 1) {
      found = 1;
      printf("%s\n", titles[i]);
    }
    if (i == n - 1 && found == 0) {
      printf("No Match");
    }
  }
  return 0;
}

// TODO 3: Define the function
int containsKeyword(char *title, char *keyword) {
  int len2 = strlen(title), len1 = strlen(keyword);
  int match = 0, found = 0;
  for (int i = 0; i <= len2 - len1; i++) {
    int match = 1;
    for (int j = 0; j < len1; j++) {
      if (keyword[j] != title[i + j]) {
        match = 0;
        break;
      }
    }
    if (match) {
      found = 1;
      break;
    }
  }
  return found;
}
