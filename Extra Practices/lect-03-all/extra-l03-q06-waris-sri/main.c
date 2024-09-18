/*
---------- Lesson 03 Extra: Q06 -----------
Student ID: 6788112
Name: Waris
Surname: Sripatoomrak
Section: 3
-------------------------------------------
*/

#include <stdio.h>

int main(void) {
  // Your code started here.
  char ch;
  int cnt_vowels = 0;
  int cnt_consonants = 0;
  do {
    // Ignore whitespace/newline characters
    scanf(" %c", &ch);
    if (ch >= 'a' && ch <= 'z') {
      if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        cnt_vowels++;
      } else {
        cnt_consonants++;
      }
    }
  } while (ch != '0');
  printf("vowel:%d\n", cnt_vowels);
  printf("consonant:%d", cnt_consonants);
  return 0;
}
