// YOUR CODE HERE
#include <stdio.h>

int main() {
    int a, b;
    int check = 0;
    scanf("%d %d", &a, &b);
    for (int i = a; i <= b; i++) {
        // TODO: check whether the first value is outputted or not, if so, change `check` to 1
        if (i % 3 != 0) {
            if (check == 0) {
                printf("%d", i);
                check = 1;
            } else {
                printf(",%d", i);
            }
        }
    }
    return 0;
}
