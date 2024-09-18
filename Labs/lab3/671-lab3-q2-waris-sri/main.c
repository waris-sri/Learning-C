// YOUR CODE HERE
#include <stdio.h>

int main() {
    int n;
    while (1) {
        scanf("%d", &n);
        if (n != 0) {
            printf("input: %d\n", n);
        } else {
            printf("input: 0\n");
            printf("finish");
            break;
        }
    }
    return 0;
}
