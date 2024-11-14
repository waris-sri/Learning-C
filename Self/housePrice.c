#include <stdio.h>

int main() {
  struct HousePrice {
    float size;
    int n_beds;
    int n_baths;
    char is_renovated;
    float price;
  };

  // tried to implement using an array of structures
  // can actually just be `struct HousePrice h_info;` if there's only 1 house
  struct HousePrice h_info[3] = {
      {52.3, 1, 2, 'N', 115 * 10000},
      {103.2, 3, 3, 'Y', 285 * 10000},
      {99.8, 2, 2, 'Y', 210 * 10000},
  };

  return 0;
}
