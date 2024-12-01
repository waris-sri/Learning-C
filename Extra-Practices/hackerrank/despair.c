#include <ctype.h>
#include <stdio.h>
#include <string.h>

void reverse(char *word, int wordlen) {
  for (int i = wordlen - 1; i >= 0; i--) {
    printf("%c", word[i]);
  }
  printf(" ");
}

int main() {
  char str[100];
  scanf("%[^\n]", str);
  // one loop for the entire sentence, and another for each word
  int i = 0, len = strlen(str);
  while (i < len) {
    char word[100];
    int wordlen = 0;
    // if the current character isn't whitespace, extract it
    while (i < len && !isspace(str[i])) {
      word[wordlen] = str[i];
      wordlen++;
      i++;
    }
    // if the current character is whitespace, skip by incrementing `i`
    while (i < len && isspace(str[i])) {
      i++;
    }
    word[wordlen] = '\0';

    if (wordlen > 0) {
      reverse(word, wordlen);
    }
  }
  return 0;
}
