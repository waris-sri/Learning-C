// YOUR CODE HERE
#include <stdio.h>

int main() {
    char n;
    int cnt, odd;
    do {
        scanf("%c", &n);
        if (n % 2 != 0 && n != 'q') {
            cnt++;
            odd += (n - 48);
        }
    } while (n != 'q');
    printf("%d:%d", cnt, odd);
    return 0;
}
