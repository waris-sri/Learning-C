#include <stdio.h>
#include <string.h>

#define MAX_MATCHES 150
#define SIZE 18

struct Student {
  char name[11];
  char id[11];
};

int search(const char *prefix, char *out, struct Student students[], int size) {
  char temp[11];
  char *pos;
  int found = 0;
  for (int i = 0; i < size; i++) {
    int k = 0;
    if (strncmp(students[i].name, prefix, strlen(prefix)) == 0) {
      for (int j = strlen(prefix); j < strlen(students[i].name); j++) {
        temp[k] = students[i].name[j];
        k++;
      }
      temp[k] = '\0';
      pos = strchr(temp, '\n');
      if (pos != NULL)
        *pos = '\0';
      printf("%s[%s]\n", prefix, temp);
      found = 1;
    }
    if (strncmp(students[i].id, prefix, strlen(prefix)) == 0) {
      for (int j = strlen(prefix); j < strlen(students[i].id); j++) {
        temp[k] = students[i].id[j];
        k++;
      }
      temp[k] = '\0';
      pos = strchr(temp, '\n');
      if (pos != NULL)
        *pos = '\0';
      printf("%s[%s]\n", prefix, temp);
      found = 1;
    }
  }
  return found;
}

int main() {
  struct Student bois[SIZE] = {
      {"koon", "131"},   {"beam", "878"}, {"mongkorn", "232"}, {"ben", "666"},
      {"japan", "520"},  {"boat", "294"}, {"poon", "442"},     {"pun", "624"},
      {"jedi", "524"},   {"arus", "714"}, {"poom", "404"},     {"gar", "502"},
      {"wuth", "200"},   {"dear", "038"}, {"natty", "602"},    {"bamm", "144"},
      {"copter", "109"}, {"bhone", "999"}};
  char suggestion[11], line[11];
  scanf("%s", line);
  char *pos;
  pos = strchr(line, '\n');
  if (pos != NULL) {
    *pos = '\0';
  }
  int found = search(line, suggestion, bois, SIZE);
  if (!found) {
    printf("Not found!");
  }
  return 0;
}
