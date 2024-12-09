#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    int a[5][6];

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 6; j++) {
            a[i][j] = rand() % 50 + 1;
        }
    }

    printf("Generated 5x6 array:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 6; j++) {
            printf("A[%d][%d] = %d\t", i, j, a[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");

    for (int i = 0; i < 5; i++) {
        int row_sum = 0;
        for (int j = 0; j < 6; j++) {
            row_sum += a[i][j];
        }
        printf("矩陣A的第%d列總合為: %d\n", i + 1, row_sum);

        int col_sum = 0;
        for (int j = 0; j < 5; j++) {
            col_sum += a[j][i];
        }
        printf("矩陣A的第%d行總合為: %d\n", i + 1, col_sum);
    }

    return 0;
}
