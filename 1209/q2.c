#include <stdio.h>

int main() {
    int a[3][5] = {{9, 14, 28, 24, 37}, {24, 37, 36, 37, 16}, {37, 16, 22, 3, 44}};
    int b[3][5] = {{21, 40, 43, 12, 15}, {12, 15, 31, 40, 22}, {40, 22, 31, 13, 33}};

    int ai = 0, aj = 0;
    int bi = 0, bj = 0;
    printf("== 矩陣A ===\n");
    for (ai = 0; ai < 3; ai++) {
        for (aj = 0; aj < 5; aj++) {
            printf("A[%d][%d]=%d, \t", ai, aj, a[ai][aj]);
        }
        printf("\n");
    }

    printf("\n\n");

    printf("=== 矩陣B ===\n");
    for (bi = 0; bi < 3; bi++) {
        for (bj = 0; bj < 5; bj++) {
            printf("B[%d][%d]=%d, \t", bi, bj, b[bi][bj]);
        }
        printf("\n");
    }

    printf("\n\n");

    printf("=== A + B 矩陣結果 ===\n");

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            printf("C[%d][%d]=%d, \t", i, j, a[i][j] + b[i][j]);
        }
        printf("\n");
    }
}