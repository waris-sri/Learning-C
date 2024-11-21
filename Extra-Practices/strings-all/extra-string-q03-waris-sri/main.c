/*
--------- String Extra: Find word occurance ----------
Student ID: 6788112
Name: Waris
Surname: Sripatoomrak
Section: 3
------------------------------------------------------
*/

#include <stdio.h>
#include <string.h>

#define MAX 170

int main(void) {
  // Your code started here.
  char str[MAX], search[MAX];
  char word[MAX] = "";
  int found = 0;
  int wordStart = 0;

  fgets(str, MAX, stdin);
  scanf("%s", search);

  char *pos;
  if ((pos = strchr(str, '\n')) != NULL)
    *pos = '\0';

  for (int i = 0; i <= strlen(str); i++) {
    if (str[i] == ' ' || str[i] == '\0') {
      // strncpy(strto,strfrom,n): copy n chars from strfrom to strto
      strncpy(word, &str[wordStart], i - wordStart);
      // End the extracted word with '\0' to make it a valid C string
      word[i - wordStart] = '\0';
      if (strcmp(word, search) == 0) {
        printf("Word %s found at index: %d\n", search, wordStart);
        found = 1;
      }
      wordStart = i + 1;
    }
  }

  if (!found) {
    printf("Not found.");
  }

  return 0;
}
