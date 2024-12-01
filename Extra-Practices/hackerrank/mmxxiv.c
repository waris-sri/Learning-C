#include <ctype.h>
#include <stdio.h>
#include <string.h>

int wordToNumber(char *word) {
  for (int i = 0; word[i]; i++) {
    word[i] = tolower(word[i]);
  }

  if (strcmp(word, "one") == 0)
    return 1;
  if (strcmp(word, "two") == 0)
    return 2;
  if (strcmp(word, "three") == 0)
    return 3;
  if (strcmp(word, "four") == 0)
    return 4;
  if (strcmp(word, "five") == 0)
    return 5;
  if (strcmp(word, "six") == 0)
    return 6;
  if (strcmp(word, "seven") == 0)
    return 7;
  if (strcmp(word, "eight") == 0)
    return 8;
  if (strcmp(word, "nine") == 0)
    return 9;

  if (strcmp(word, "ten") == 0)
    return 10;
  if (strcmp(word, "eleven") == 0)
    return 11;
  if (strcmp(word, "twelve") == 0)
    return 12;
  if (strcmp(word, "thirteen") == 0)
    return 13;
  if (strcmp(word, "fourteen") == 0)
    return 14;
  if (strcmp(word, "fifteen") == 0)
    return 15;
  if (strcmp(word, "sixteen") == 0)
    return 16;
  if (strcmp(word, "seventeen") == 0)
    return 17;
  if (strcmp(word, "eighteen") == 0)
    return 18;
  if (strcmp(word, "nineteen") == 0)
    return 19;

  if (strcmp(word, "twenty") == 0)
    return 20;
  if (strcmp(word, "thirty") == 0)
    return 30;
  if (strcmp(word, "forty") == 0)
    return 40;
  if (strcmp(word, "fifty") == 0)
    return 50;
  if (strcmp(word, "sixty") == 0)
    return 60;
  if (strcmp(word, "seventy") == 0)
    return 70;
  if (strcmp(word, "eighty") == 0)
    return 80;
  if (strcmp(word, "ninety") == 0)
    return 90;

  return 0;
}

void intToRoman(int num, char *roman) {
  int values[] = {100, 90, 50, 40, 10, 9, 5, 4, 1};
  char *symbols[] = {"C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

  roman[0] = '\0'; // To initialize the string, make sure there's no garbage
                   // values, prepares for using `strcat`

  for (int i = 0; i < 9 && num > 0; i++) {
    while (num >= values[i]) {
      strcat(roman, symbols[i]);
      num -= values[i];
    }
  }
}

int main() {
  char str[50];
  char word[20];
  int total = 0;
  int i = 0, j = 0;

  fgets(str, sizeof(str), stdin);
  int len = strlen(str);
  char *pos1;
  if ((pos1 = strchr(str, '\n')) != NULL) {
    *pos1 = '\0';
  }

  while (str[i] != '\0') {
    if (str[i] != ' ') {
      // Build the word character by character
      word[j++] = str[i];
    } else {
      // End of a word
      word[j] = '\0'; // Terminate the word string
      if (j > 0) {
        int num = wordToNumber(word); // Convert word to number
        total += num;                 // Add to total
        j = 0;                        // Reset word index
      }
    }
    i++;
  }

  // Process the last word if any
  if (j > 0) {
    word[j] = '\0';
    int num = wordToNumber(word);
    total += num;
  }

  // Convert the total number to Roman numeral
  char roman[20];
  intToRoman(total, roman);

  printf("%s\n", roman);

  return 0;
}
