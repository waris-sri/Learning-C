#include <ctype.h>
#include <stdio.h>
#include <string.h>

int shift;

void encrypt(char *str); // create a function to encrypt str
void decrypt(char *str); // create a function to decrypt str

int main() {
  /* INPUT */
  char str[100];
  fgets(str, 100, stdin);
  scanf("%d", &shift);
  char *ptr;
  if ((ptr = strchr(str, '\n')) != NULL)
    *ptr = '\0';

  /* FUNC CALL AND OUTPUT */
  encrypt(str);
  printf("%s\n", str);
  decrypt(str);
  printf("%s", str);

  return 0;
}

void encrypt(char *str) {
  for (int i = 0; i < strlen(str); i++) {
    if (!isspace(str[i]) && !ispunct(str[i])) {
      if (isalpha(str[i]) && isupper(str[i])) {
        str[i] = 'A' + (str[i] - 'A' + shift) % 26;
      } else {
        str[i] = 'a' + (str[i] - 'a' + shift) % 26;
      }
    }
  }
}

void decrypt(char *str) {
  for (int i = 0; i < strlen(str); i++) {
    if (!isspace(str[i]) && !ispunct(str[i])) {
      if (isalpha(str[i]) && isupper(str[i])) {
        str[i] = 'A' + (str[i] - 'A' + 26 - shift) % 26;
      } else {
        str[i] = 'a' + (str[i] - 'a' + 26 - shift) % 26;
      }
    }
  }
}
