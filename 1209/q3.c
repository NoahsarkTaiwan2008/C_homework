#include <stdio.h>

int main() {
    int row, col;
    printf("輸入矩陣A的行數: ");
    scanf("%d", &row);
    printf("輸入矩陣A的列數: ");
    scanf("%d", &col);
    
    int a[row][col];
    int b[col][row];

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("輸入a array的第%d列與第%d行數值 [%d][%d]: ", i+1, j+1, i, j);
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            b[j][i] = a[i][j];
        }
    }

    printf("矩陣A的內容是:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("A[%d][%d]= %d\t", i, j, a[i][j]);
        }
        printf("\n");
    }

    printf("矩陣B（A的轉置）是:\n");
    for (int i = 0; i < col; i++) {
        for (int j = 0; j < row; j++) {
            printf("B[%d][%d]= %d\t", i, j, b[i][j]);
        }
        printf("\n");
    }

    return 0;
}
