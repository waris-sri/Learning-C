#include <stdio.h>

int main() {
  struct Address {
    int house_num;
    char district[21];
    int zip;
  };

  struct PersonInfo {
    char name[21];
    int age;
    struct Address address;
  };

  // tried to implement using an array of structures
  // can actually just be `struct PersonInfo p_info;` if there's only 1 house
  struct PersonInfo p_info[3] = {
      {"Zhongli", 20, {199, "Liyue", 11002}},
      {"Barbara", 18, {300, "Mondstadt", 15213}},
      {"Klee", 17, {773, "Mondstadt", 15213}},
  };

  return 0;
}
