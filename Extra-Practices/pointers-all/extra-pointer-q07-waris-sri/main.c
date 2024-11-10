/*
---------- Pointer Extra: Shifting Array -----------
Student ID: 6788112
Name: Waris
Surname: Sripatoomrak
Section: 3
-------------------------------------------
*/

#include <stdio.h>

int n = 0;

///// Start your function `shift_array` prototype /////
void shift_array(char *p_opt, int arr[]);
///// End of you code /////

int main() {
  char opt; // shift option
  char *p_opt;

  scanf("%c %d", &opt, &n);
  int arr[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  ///// Start of your code to call function `shift_array` /////
  // point `p_opt` to `opt`
  p_opt = &opt;
  shift_array(p_opt, arr);
  ///// End of you code /////

  printf("Shift option: %c\n", *p_opt);
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }

  return 0;
}

///// Start your function `shift_array` implementation /////
void shift_array(char *p_opt, int arr[]) {
  int first = arr[0];
  int last = arr[n - 1];
  // ex. {1,2,3,4}
  // L: {2,3,4,1}
  // R: {4,1,2,3}
  if (*p_opt == 'L') {
    for (int i = 0; i < n - 1; i++) {
      arr[i] = arr[i + 1];
    }
    arr[n - 1] = first;
  } else if (*p_opt == 'R') {
    for (int i = n - 1; i > 0; i--) {
      arr[i] = arr[i - 1];
    }
    arr[0] = last;
  }
}
///// End of you code /////
