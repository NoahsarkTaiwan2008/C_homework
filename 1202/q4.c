#include <stdio.h>

int main() {
    int a[3][5] = {{30, 29, 28, 27, 26}, {25, 24, 23, 22, 21}, {20, 19, 18, 17, 16}};
    int b[3][5] = {{15, 14, 13, 12, 11}, {10, 9, 8, 7, 6}, {5, 4, 3, 2, 1}};
    int sum1 = 0, sum2 = 0;
    
    printf("=== 以下是A陣列 ===\n");

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            printf(" a[%d][%d] = %2d , ", i, j, a[i][j]);
            sum1 += a[i][j];
        }
        printf("\n");
    }

    printf("=== 以下是B陣列 ===\n");

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 5; j++) {
                printf(" b[%d][%d] = %2d , ", i, j, b[i][j]);
                sum2 += b[i][j];
            }
        printf("\n");
    }

    printf("===A、B陣列的3種計算結果===\n");
    printf("<<<結果1 : A陣列總和為%d>>>\n\n", sum1);
    printf("<<<結果2 : B陣列總和為%d>>>\n\n", sum2);
    printf("<<<結果3 : A、B陣列總和為%d>>>\n\n", sum1 + sum2);

}