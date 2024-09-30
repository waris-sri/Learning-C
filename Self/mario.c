#include <stdio.h>

int main(void) {
  int h;
  // Prompt height from user
  do {
    printf("Enter pyramid height from 1 to 8: ");
    scanf("%d", &h);
  }
  // If the user entered a value that's less than 1 or more than 8, then keep
  // asking.
  while (h < 1 || h > 8);

  /* Implement formula for spaces, when:
  height = pyramid height
  s = spaces
  r = row = bricks
  c = column */

  // Put placeholders to avoid not declaring variables
  int s;
  int c;
  int r;

  /*
  Insert a new line when row is less than height
  Given h = 3
    # -> row 0 (since r started with 0)
   ## -> row 1
  ### -> row 2 -> 2 < 3 -> insert a new line
  */
  for (r = 0; r < h; r++) {
    for (c = 0; c <= r; c++) {
      for (s = 0; s < h - r - 1; s++) {
        printf(" ");
      }
      /*
      Insert a new brick in a new line (from the r for loop) when column is less
      than or equal to row Given h = 3 # -> row 0    column = 0 (since r & c
      started with 0) -> # -> new line
       ## -> row 1    column = 0 -> # -> ## -> new line
      ### -> row 2    column = 0 -> ## -> ### -> new line
      */
      for (c = 0; c <= r; c++) {
        printf("#");
      }

      printf("  ");

      for (c = 0; c <= r; c++) {
        printf("#");
      }
    }
    printf("\n");
  }
}
