#include <stdio.h>

int main() {
    int data[10];
    int n, i, j, t;

    printf("===氣泡排序===\n");
    printf("連續輸入10個數值\n\n");

    printf("排序前: ");
    for (i = 0; i < 10; i++) {
        scanf("%d", &data[i]);
    }

    for (i = 0; i < 9; i++) {
        for (j = 0; j < 10 - i - 1; j++) {
            if (data[j] < data[j + 1]) {
                t = data[j];
                data[j] = data[j + 1];
                data[j + 1] = t;
            }
        }
    }

    printf("排序後: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", data[i]);
    }

    printf("\n\n");
    return 0;
}
