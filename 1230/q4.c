#include <stdio.h>

int comb(int, int);

int comb(int n, int m) {
    if (n == m || m == 0) {
        return 1;
    } else {
        return comb(n - 1, m) + comb(n - 1, m - 1);
    }
}

int main() {
    int n, m, ans;

    printf("輸入第一次要計算組合的兩個數。\n");
    printf("輸入第一個數:");
    scanf("%d", &n);
    printf("輸入第二個數:");
    scanf("%d", &m);

    if (n >= m) {
        ans = comb(n, m);
        printf("組合公式 comb(%d, %d) = %d\n\n", n, m, ans);
    } else {
        printf("\n數值 n 必須大於或等於 m\n\n");
    }
}
