#include <stdio.h>

int main(void) {
  int k;
  scanf("%d", &k);

  //----start to edit the code here----//
  // ptr declaration and assignment
  // from here you should replace k with a pointer ptr

  int *ptr = &k;
  int a = *ptr;
  int b = a + *ptr;
  if (*ptr > 10) {
    *ptr = *ptr + 10;
  } else {
    *ptr = *ptr + 5;
  }
  printf("%d", *ptr);

  //-----------end here-----------//

  return 0;
}
