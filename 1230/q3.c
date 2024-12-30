#include <stdio.h>

int main() {
    int n = 10;
    int ans = 1;

    for (int i = 1; i <= n; i++) {
        ans *= i;
    }

    printf("1 * 2 * ... * 9 * 10 = %d\n", ans);
    return 0;
}
