#include <stdio.h>
#include <math.h>

int main() {
    int x;
    
    printf("輸入一個整數:\n");
    printf("當 x = ");
    scanf("%d", &x);

    double power4 = pow(x, 4.0);
    double power3 = pow(x, 3.0);
    double power2 = pow(x, 2.0);
    double power1 = pow(x, 1.0);
    double ans = power4 * 5 + power3 * 4 + power2 * 3 + power1 * 2 + 1;

    printf("f(x)= 5 x pow(x, 4) + 4 x pow(x, 3) + 3 x pow(x, 2) + 2 x pow(x, 1) + 1\n");
    printf("f(%d)= 5 x pow(%d, 4) + 4 x pow(%d, 3) + 3 x pow(%d, 2) + 2 x pow(%d, 1) + 1\n", x, x, x, x, x);
    printf("f(%d)= 5 x %.0f + 4 x %.0f + 3 x %.0f + 2 x %.0f\n", x, power4, power3, power2, power1);
    printf("f(%d)= %.0f + %.0f + %.0f + %.0f + 1\n", x, power4 * 5, power3 * 4, power2 * 3, power1 * 2);
    printf("f(%d)= %.0f\n", x, ans);
}
