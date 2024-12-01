#include <ctype.h>
#include <stdio.h>
#include <string.h>

#define MAX_CHAR 420

struct data_info {
  // TODO 1: Add members of the struct (3 lines)
  int data_length;
  int num_0;
  int num_1;
  //
};
typedef struct data_info DATAINFO;

// TODO 2: Define the `decode_data` function (as many lines as you need)
DATAINFO decode_data(char *in_str, char *out_str) {
  DATAINFO data = {0, 0, 0};

  /*
   * TRICK:
   * Initialize the index of output string right away, for iterating thru it and
   * use the last updated value as string length (w/o substracting 1)
   */
  int out_idx = 0;

  for (int i = 0; in_str[i] != '\0'; i++) {
    // Check whether the current and previous character is uppercase or not
    int whether_prev_upper = isupper(in_str[i - 1]);
    int whether_curr_upper = isupper(in_str[i]);

    // Whitespaces are lowercase
    if (in_str[i - 1] == ' ') {
      whether_prev_upper = 0;
    }
    if (in_str[i] == ' ') {
      whether_curr_upper = 0;
    }

    // Determine whether the current output character will be 0 or 1
    if (whether_curr_upper == whether_prev_upper) {
      out_str[out_idx++] = '0';
      data.num_0++;
    } else {
      out_str[out_idx++] = '1';
      data.num_1++;
    }
  }

  // IMPORTANT: Always terminate the string with '\0
  out_str[out_idx] = '\0';
  data.data_length = out_idx;
  return data;
}
// ===== DO NOT MODIFY =====

int main() {
  struct data_info info;
  // =========================
  // TODO 3: Use the function here (at most 4 lines)
  char in_str[MAX_CHAR], out_str[MAX_CHAR];
  fgets(in_str, MAX_CHAR, stdin);
  char *pos1;
  if ((pos1 = strchr(in_str, '\n')) != NULL) {
    *pos1 = '\0';
  }
  info = decode_data(in_str, out_str);

  //===== DO NOT MODIFY =====
  printf("The decoded data is \"%s\" (%d characters) \n", out_str,
         info.data_length);
  printf("The number of '0' is %d, and the number of '1' is %d.\n", info.num_0,
         info.num_1);
  return 0;
}
// =========================
