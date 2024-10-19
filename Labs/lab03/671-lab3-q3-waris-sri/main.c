// YOUR CODE HERE
#include <stdio.h>

int main() {
    int a, b, c, d, cnt;
    while (1) {
        scanf("%d %d %d %d", &a, &b, &c, &d);
        if (a + b + c + d == 42) {
            printf("You win!\n");
            cnt++;
        } else {
            break;
        }
    }
    printf("You lose!\n");
    printf("Number of wins: %d", cnt);
    return 0;
}
