// YOUR CODE HERE
#include <stdio.h>

int main() {
  struct Item {
    short id;
    char name[21];
    short qty;
    float price;
  };

  struct Item items[2];
  for (int i = 0; i < 2; i++) {
    scanf("%hd", &items[i].id);
    scanf("%s", items[i].name);
    scanf("%hd", &items[i].qty);
    scanf("%f", &items[i].price);
  }
  for (int i = 0; i < 2; i++) {
    printf("Item(#%hd)", items[i].id);
    printf("named %s ", items[i].name);
    printf("qyt: %hd ", items[i].qty);
    printf("(with price %.2f)\n", items[i].price);
  }

  return 0;
}
