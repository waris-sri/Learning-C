/*
--------- String Extra: Highest Order String -----------
Student ID: 6788112
Name: Waris
Surname: Sripatoomrak
Section: 3
--------------------------------------------------------
*/

#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 50

int main() {
  printf("Enter list of words (or 'quit' to exit)\n");
  char maxWord[MAX_LENGTH]; // This maxWord is used to keep the highest order

  ///// Start your code here /////
  char str[MAX_LENGTH];
  int cnt = 0;
  while (1) {
    scanf("%s", str);
    cnt++;
    // Accept at least 1 input, including "quit"
    if ((strcmp(str, "quit") == 0) && (cnt > 1)) {
      break;
    }
    if (strcmp(str, maxWord) > 0) {
      strcpy(maxWord, str);
    }
  }
  // printf("%s\n", maxWord);
  ///// End your code here /////

  printf("Word with the highest order is: %s", maxWord);
  return 0;
}
