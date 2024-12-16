#include <stdio.h>

int main() {
    int data[10];
    int n, i, j, t;

    printf("===二分搜尋===\n");
    printf("連續輸入10個數值\n\n");

    printf("排序前: ");
    for (i = 0; i < 10; i++) {
        scanf("%d", &data[i]);
    }

    for (i = 0; i < 9; i++) {
        for (j = 0; j < 10 - i - 1; j++) {
            if (data[j] > data[j + 1]) {
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

    printf("輸入要搜尋的數字: ");
    int search, num = -1, low = 0, high = 9, midNum = 0;
    scanf("%d", &search);

    while (low <= high) {
        midNum = (low + high) / 2;

        if (data[midNum] == search) {
            num = midNum;
            break;
        }

        if (data[midNum] > search) {
            high = midNum - 1;
        } else {
            low = midNum + 1;
        }
    }

    if (num == -1) {
        printf("\nSorry, 找不到 %d。\n", search);
    } else {
        printf("\nFind! 位於排序後第 %d 個位置。\n", (num + 1));
    }

    printf("\n\n");
    return 0;
}
