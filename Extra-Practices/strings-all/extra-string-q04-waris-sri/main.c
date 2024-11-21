/*
---------- String Extra: MORE Counting -----------
Student ID: 6788112
Name: Waris
Surname: Sripatoomrak
Section: 3
--------------------------------------------------
*/

#include <ctype.h>
#include <stdio.h>
#include <string.h>

#define MAX 170

int main(void) {
  char sentence[MAX];
  int cnt_u = 0, cnt_l = 0, cnt_n = 0;
  // Your code started here.
  fgets(sentence, MAX, stdin);
  for (int i = 0; i < strlen(sentence); i++) {
    if (isupper(sentence[i]))
      cnt_u++;
    if (islower(sentence[i]))
      cnt_l++;
    if (isnumber(sentence[i]))
      cnt_n++;
  }

  printf("Upper: %d\n", cnt_u);
  printf("Lower: %d\n", cnt_l);
  printf("Digit: %d", cnt_n);

  return 0;
}
