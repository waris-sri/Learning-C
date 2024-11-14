#include <stdio.h>
#include <string.h>

int main() {
  struct Book {
    int id;
    char title[51];
    char author[51];
    int pages;
  };

  // tried to implement using an array of structures
  // can actually just be `struct Book book_info;` if there's only 1 book
  struct Book book_info[3];
  for (int i = 0; i < 3; i++) {
    printf(">> Book %d:\n", i + 1);
    printf("ID: ");
    scanf("%d", &book_info[i].id);

    char tmp[256];
    fgets(tmp, sizeof(tmp), stdin);
    if (strchr(tmp, '\n'))
      *strchr(tmp, '\n') = '\0';
    printf("Title: ");
    fgets(book_info[i].title, 51, stdin);

    printf("Author: ");
    fgets(book_info[i].author, 51, stdin);

    printf("Pages: ");
    scanf("%d", &book_info[i].pages);
  }

  for (int i = 0; i < 3; i++) {
    printf("===================\n");
    printf(">> BOOK %d\n", i + 1);
    printf("Title: %s", book_info[i].title);
    printf("Author: %s", book_info[i].author);
    printf("%d pages, ", book_info[i].pages);
    printf("ID %d\n", book_info[i].id);
  }

  return 0;
}
