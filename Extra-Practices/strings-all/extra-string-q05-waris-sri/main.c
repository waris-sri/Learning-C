/*
--------- String Extra: Remove Symbols ----------
Student ID: 6788112
Name: Waris
Surname: Sripatoomrak
Section: 3
-------------------------------------------------
*/

#include <ctype.h>
#include <stdio.h>
#include <string.h>

#define MAX 170

int main(void) {
  char sentence[MAX], new_sentence[MAX];
  // Your code started here.
  fgets(sentence, MAX, stdin);
  int cnt = 0;
  for (int i = 0; i < strlen(sentence); i++) {
    if (isalpha(sentence[i]) || isdigit(sentence[i])) {
      new_sentence[cnt] = sentence[i];
      cnt++;
    }
  }
  new_sentence[cnt] = '\0';

  if (cnt > 0) {
    printf("%s", new_sentence);
  } else {
    printf("Empty string.");
  }

  return 0;
}
