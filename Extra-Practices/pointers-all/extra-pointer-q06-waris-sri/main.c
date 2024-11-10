/*
---------- Pointer Extra: Maximum Range -----------
Student ID: 6788112
Name: Waris
Surname: Sripatoomrak
Section: 3
-------------------------------------------
*/

#include <stdio.h>

void find_range(int x, int y, int z, int *range);

int main() {
  int a, b, c, range;
  scanf("%d%d%d", &a, &b, &c);

  ///// Start your code to call `find_range` function /////
  find_range(a, b, c, &range);
  ///// End of you code /////

  printf("%d", range);
}

///// Start your function `find_range` implementation /////
void find_range(int x, int y, int z, int *range) {
  int min = x;
  if (y < min)
    min = y;
  if (z < min)
    min = z;
  int max = x;
  if (y > max)
    max = y;
  if (z > max)
    max = z;
  *range = max - min;
}

///// End of you code /////
