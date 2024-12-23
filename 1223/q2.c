#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int a[3][3] = {{23, 78, 66}, {87, 59, 99}, {11, 45, 38}};
    int b[3][3] = {{17, 54, 37}, {49, 28, 99}, {3, 19, 29}};
    int sum[3][3], diff[3][3], result[3][3];
    int i, j, k;

    printf("\n矩陣A為\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    printf("=========================\n");

    printf("\n矩陣B為\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }

    printf("=========================\n");

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            sum[i][j] = a[i][j] + b[i][j];
            diff[i][j] = a[i][j] - b[i][j];
        }
    }

    printf("矩陣A+矩陣B為\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }

    printf("=========================\n");

    printf("矩陣A-矩陣B為\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\t", diff[i][j]);
        }
        printf("\n");
    }

    printf("=========================\n");

    printf("(矩陣A+矩陣B) * (矩陣A-矩陣B)為\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            result[i][j] = 0;
            for (k = 0; k < 3; k++) {
                result[i][j] += sum[i][k] * diff[k][j];
            }
        }
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");
    system("PAUSE");
    return 0;
}
