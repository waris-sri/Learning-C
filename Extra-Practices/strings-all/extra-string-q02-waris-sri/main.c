/*
--------- String Extra: Find Letter Occurance ----------
Student ID: 6788112
Name: Waris
Surname: Sripatoomrak
Section: 3
--------------------------------------------------------
*/

#include <ctype.h>
#include <stdio.h>
#include <string.h>

#define MAX 170

int main(void) {
  // Your code started here.
  char str[MAX], search;
  fgets(str, MAX, stdin);
  scanf("%c", &search);
  for (int i = 0; i < MAX; i++) {
    if (str[i] == search) {
      printf("Letter %c found at index: %d\n", search, i);
    } else {
      printf("Not found.");
    }
  }
  return 0;
}
