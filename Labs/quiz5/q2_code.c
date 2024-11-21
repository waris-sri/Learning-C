#include <stdio.h>
#include <string.h>

// TODO 1: Declare the function prototype
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
  // TODO 2: Call the function
  // Search for the keyword in each book title
  for (int i = 0; i < n; i++) {

    // no need to use [][], titles[i] already gives us the pointer to the i-th
    // string; would need [][] if you were to access individual characters like
    // titles[i][j]

    /* === structure ===
     * titles[0] -> "first book title"
     * titles[1] -> "second book title"
     * titles[2] -> "third book title"
     * ...
     * titles[n-1] -> "nth book title"
     * Each title can be up to 50 chars + null terminator
     *
     * === if we use [][] ===
     * titles[i][0] -> first character of i-th title
     * titles[i][1] -> second character of i-th title
     * titles[i][2] -> third character of i-th title
     * ...
     * titles[i][49] -> last possible character of i-th title
     * titles[i][50] -> null terminator
     */

    if (containsKeyword(titles[i], keywords) == 1) {
      printf("%s\n", titles[i]);
      found = 1;
    }
    if (i == n - 1 && found == 0) {
      printf("No Match");
    }
  }

  return 0;
}

// TODO 3: Define the function
int containsKeyword(char *title, char *keyword) {
  int lenT = strlen(title), lenK = strlen(keyword);
  int match, found = 0;
  for (int i = 0; i <= lenT - lenK; i++) {
    // put `match` inside the loop b/c for each new starting position
    // in the title we check is a new potential match attempt.
    match = 1;
    for (int j = 0; j < lenK; j++) {
      if (title[i + j] != keyword[j]) {
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
