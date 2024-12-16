#include <stdio.h>

int main() {
    int colA = 0, rowA = 0;
    printf("輸入矩陣A共有幾列: ");
    scanf("%d", &colA);
    printf("輸入矩陣A共有幾行: ");
    scanf("%d", &rowA);

    printf("\n\n");

    int colB = 0, rowB = 0;
    printf("輸入矩陣B共有幾列: ");
    scanf("%d", &colB);
    printf("輸入矩陣B共有幾行: ");
    scanf("%d", &rowB);

    int A[colA][rowA], B[colB][rowB];

    printf("請輸入矩陣A的元素：\n");
    for (int i = 0; i < colA; i++) {
        for (int j = 0; j < rowA; j++) {
            printf("輸入矩陣A內元素第%d列與第%d行數值 [%d][%d]: ", i, j, i, j);
            scanf("%d", &A[i][j]);
        }
    }

    printf("請輸入矩陣B的元素：\n");
    for (int i = 0; i < colB; i++) {
        for (int j = 0; j < rowB; j++) {
            printf("輸入矩陣B內元素第%d列與第%d行數值 [%d][%d]: ", i, j, i, j);
            scanf("%d", &B[i][j]);
        }
    }

    printf("\n矩陣A：\n");
    for (int i = 0; i < colA; i++) {
        for (int j = 0; j < rowA; j++) {
            printf("A[%d][%d]= %d, \t", i, j, A[i][j]);
        }
        printf("\n");
    }

    printf("\n矩陣B：\n");
    for (int i = 0; i < colB; i++) {
        for (int j = 0; j < rowB; j++) {
            printf("B[%d][%d]= %d, \t", i, j, B[i][j]);
        }
        printf("\n");
    }

    int C[colA][rowA];

    printf("\nHadamard 乘積結果：\n");
    for (int i = 0; i < colA; i++) {
        for (int j = 0; j < rowA; j++) {
            C[i][j] = A[i][j] * B[i][j];
            printf("C[%d][%d]= %d, \t", i, j, C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
