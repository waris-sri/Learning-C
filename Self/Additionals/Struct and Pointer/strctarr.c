// Array of Structs Using Pointers

#include <stdio.h>

int main() {
  struct Books {
    char title[100];
    char author[50];
    float price;
  };
  struct Books book[3];
  for (int i = 0; i < 3; i++) {
    char *pos;
    printf("Book #%d: ", i + 1);
    scanf(" %[^\n]", book[i].title);
    printf("Author #%d: ", i + 1);
    scanf(" %[^\n]", book[i].author);
    printf("Price #%d: ", i + 1);
    scanf("%f", &book[i].price);
  }
  for (int i = 0; i < 3; i++) {
    printf("========================\n");
    printf("Book #%d: ", i + 1);
    printf("%s\n", book[i].title);
    printf("Author #%d: ", i + 1);
    printf("%s\n", book[i].author);
    printf("Price #%d: ", i + 1);
    printf("%.2f\n", book[i].price);
  }
  return 0;
}
