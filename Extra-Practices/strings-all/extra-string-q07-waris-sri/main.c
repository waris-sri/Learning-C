/*
------------- String Extra: Manage String --------------
Student ID:
Name:
Surname:
Section:
--------------------------------------------------------
*/

#include <stdio.h>
#include <string.h>

#define MAX 9

///// Start your function `manage_string` prototype /////
int manage_string(char *a1, char *a2);
///// End of your code /////

int main() {
  char name1[MAX], name2[MAX];

  ///// Complete the code in this section to recieves two input strings /////
  fgets(name1, MAX, stdin);
  fgets(name2, MAX, stdin);
  char *pos;
  if ((pos = strchr(name1, '\n')) != NULL) {
    *pos = '\0';
  }
  if ((pos = strchr(name2, '\n')) != NULL) {
    *pos = '\0';
  }
  ///// End of your code /////

  ///// Start of your code to call function `manage_string` /////
  manage_string(name1, name2);
  ///// End of your code /////

  printf("%s\n", name1);
  printf("%s\n", name2);

  ///// Start of your code to display how many vowels? /////
  int total_vowels = manage_string(name1, name2);
  printf("%d", total_vowels);
  ///// End of your code /////

  return 0;
}

///// Start your function `manage_string` implementation /////
int manage_string(char *a1, char *a2) {
  int vowel_a1 = 0, vowel_a2 = 0;
  char tmp[MAX];
  strcpy(tmp, a1);
  strcpy(a1, a2);
  strcpy(a2, tmp);
  for (int i = 0; i < MAX; i++) {
    if (a1[i] == 'a' || a1[i] == 'i' || a1[i] == 'u' || a1[i] == 'e' ||
        a1[i] == 'o' || a1[i] == 'A' || a1[i] == 'I' || a1[i] == 'U' ||
        a1[i] == 'E' || a1[i] == 'O')
      vowel_a1++;
    if (a2[i] == 'a' || a2[i] == 'i' || a2[i] == 'u' || a2[i] == 'e' ||
        a2[i] == 'o' || a2[i] == 'A' || a2[i] == 'I' || a2[i] == 'U' ||
        a2[i] == 'E' || a2[i] == 'O')
      vowel_a2++;
  }
  return vowel_a1 + vowel_a2;
}
///// End of your code /////
