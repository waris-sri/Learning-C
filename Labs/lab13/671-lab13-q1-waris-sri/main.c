#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LEN 20

int main(void) {
  // YOUR CODE HERE
  char string[MAX_LEN];
  fgets(string, MAX_LEN, stdin);
  int i = 0;
  while (string[i] != '\0') {
    if (isalpha(string[i])) {
      if (islower(string[i])) {
        string[i] = toupper(string[i]);
      } else {
        string[i] = tolower(string[i]);
      }
    } else {
      if (string[i] == '_') {
        string[i] = ' ';
      } else if (string[i] == ' ') {
        string[i] = '_';
      }
    }
    i++;
  }
  printf("%s", string);
  return 0;
}
