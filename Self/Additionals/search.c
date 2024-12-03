#include <stdio.h>
#include <string.h>

#define MAX_MATCHES 150
#define MAX_LENGTH 10
#define SIZE 18

struct Student {
  char name[MAX_LENGTH];
  char id[MAX_LENGTH];
};

int search(char *prefix, char *out, struct Student students[], int size) {
  char temp[MAX_LENGTH];
  char *pos;
  int found = 0;
  for (int i = 0; i < size; i++) {
    int k = 0; // Keep track of characters to add to suggestion

    // For student name suggestions
    // `strncasecmp` makes the checking process case-insensitive
    if (strncasecmp(students[i].name, prefix, strlen(prefix)) == 0) {
      for (int j = strlen(prefix); j < strlen(students[i].name); j++) {
        temp[k] = students[i].name[j];
        k++;
      }
      temp[k] = '\0';
      pos = strchr(temp, '\n');
      if (pos != NULL)
        *pos = '\0';
      printf("%s\033[30;44m[%s]\033[0m\n", prefix, temp);
      found = 1;
    }

    // For student ID suggestions
    if (strncmp(students[i].id, prefix, strlen(prefix)) == 0) {
      for (int j = strlen(prefix); j < strlen(students[i].id); j++) {
        temp[k] = students[i].id[j];
        k++;
      }
      temp[k] = '\0';
      pos = strchr(temp, '\n');
      if (pos != NULL)
        *pos = '\0';
      printf("%s\033[30;44m[%s]\033[0m\n", prefix, temp);
      found = 1;
    }
  }

  return found;
}

int main() {
  struct Student students[SIZE] = {
      {"koon", "131"},   {"beam", "878"}, {"mongkorn", "232"}, {"ben", "666"},
      {"japan", "520"},  {"boat", "294"}, {"poon", "442"},     {"pun", "624"},
      {"jedi", "524"},   {"arus", "714"}, {"poom", "404"},     {"gar", "502"},
      {"wuth", "200"},   {"dear", "038"}, {"natty", "602"},    {"bamm", "144"},
      {"copter", "109"}, {"bhone", "999"}};
  char suggestion[MAX_LENGTH], line[MAX_LENGTH];
  scanf("%s", line);
  char *pos;
  pos = strchr(line, '\n');
  if (pos != NULL) {
    *pos = '\0';
  }
  int found = search(line, suggestion, students, SIZE);
  if (!found) {
    printf("\033[1;30;31mNot found!\033[0m\n");
  }
  return 0;
}
