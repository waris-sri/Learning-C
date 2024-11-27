// Accessing Struct Members Using Pointers

#include <stdio.h>

int main() {
  struct Student {
    char name[50];
    int roll_no;
    float marks;
  };
  struct Student std;
  char *name = std.name;
  int *no = &std.roll_no;
  float *mark = &std.marks;
  name = "Waris Sripatoomrak";
  *no = 6788112;
  *mark = 100.0f;
  printf("%s\n", name);
  printf("%d\n", *no);
  printf("%.2f\n", *mark);
  return 0;
}
