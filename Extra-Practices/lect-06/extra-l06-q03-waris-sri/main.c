/*
---------- Lesson 06 Extra: Q03 -----------
Student ID: 6788112
Name: Waris
Surname: Sripatoomrak
Section: 3
-------------------------------------------
*/

#include <ctype.h>
#include <stdio.h>

int main(void) {
  // Your code started here.
  char arr[100];
  int count[100] = {0}; // initialize all values as 0
  int n = 0;            // total number of entered characters

  char ch;
  do {
    scanf(" %c", &ch);
    // receive alphabets only, and convert each to lowercase
    if (isalpha(ch)) {
      arr[n] = tolower(ch);
      n++;
    }
  } while (ch != '1');

  // 2-pointer technique (outside-in)
  for (int i = 0; i < n; i++) {
    // do for only uncounted characters
    if (count[i] == 0) {
      // initialize for each new character and prepare for duplicates
      count[i] = 1;
      for (int j = n - 1; j > i; j--) {
        if (arr[i] == arr[j]) {
          count[i]++;
          count[j] = -1; // mark as already counted and avoid overcounting
        }
      }
    }
  }

  // sort characters ascendingly before printing (bubble sort)
  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      // only sort the valid counts
      if (arr[i] > arr[j] && count[i] > 0 && count[j] > 0) {
        // swap characters
        char tmpChar = arr[i];
        arr[i] = arr[j];
        arr[j] = tmpChar;
        // swap corresponding counts
        int tmpCount = count[i];
        count[i] = count[j];
        count[j] = tmpCount;
      }
    }
  }

  for (int i = 0; i < n; i++) {
    if (count[i] > 0) {
      printf("%c=%d ", arr[i], count[i]);
    }
  }

  return 0;
}
