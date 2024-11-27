#include <stdio.h>

#define MAX 5

/* If you use the same name 's' for both the parameter and the local variable,
   it creates a naming conflict (variable shadowing). The local variable 's'
   hides access to the parameter 's', making the parameter inaccessible
   inside the function. */
void reverse(char *s) {
  for (int i = MAX - 1; i >= 0; i--) {
    printf("%c", s[i]);
  }
}

int main() {
  char str[MAX];
  scanf("%s", str);
  reverse(str);
  return 0;
}
