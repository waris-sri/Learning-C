/*
---------- String Extra: Count Vowels -----------
Student ID: 6788112
Name: Waris
Surname: Sripatoomrak
Section: 3
-------------------------------------------------
*/

#include <ctype.h>
#include <stdio.h>
#include <string.h>

#define MAX 100

int main(void) {
  // Your code started here.
  char str[MAX];
  int cnt_a = 0, cnt_i = 0, cnt_u = 0, cnt_e = 0, cnt_o = 0;
  fgets(str, MAX, stdin);
  for (int i = 0; str[i]; i++) {
    str[i] = tolower(str[i]);
  }
  for (int i = 0; i < strlen(str); i++) {
    if (str[i] == 'a')
      cnt_a++;
    if (str[i] == 'i')
      cnt_i++;
    if (str[i] == 'u')
      cnt_u++;
    if (str[i] == 'e')
      cnt_e++;
    if (str[i] == 'o')
      cnt_o++;
  }

  printf("a: %d\n", cnt_a);
  printf("e: %d\n", cnt_e);
  printf("i: %d\n", cnt_i);
  printf("o: %d\n", cnt_o);
  printf("u: %d", cnt_u);

  return 0;
}
