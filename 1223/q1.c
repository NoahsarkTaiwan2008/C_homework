#include <stdio.h>

void bubble(int arr[]) {
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 9 - i; j++) {
            if (arr[j] < arr[j + 1]) {
                int t = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;
            }
        }
    }
}

int binary(int arr[], int size, int target) {
    int left = 0, right = size - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (arr[mid] == target) {
            return mid;
        }
        if (arr[mid] < target) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    return -1;
}

int main() {
    int number[9];

    printf("===二分搜尋法===\n");
    printf("連續輸入九個數字:");

    for (int i = 0; i < 9; i++) {
        scanf("%d", &number[i]);
    }

    printf("\n\n");
    printf("排序前:");
    for (int i = 0; i < 9; i++) {
        printf("%d, ", number[i]);
    }

    bubble(number);

    printf("\n\n");
    printf("排序後:");
    for (int i = 0; i < 9; i++) {
        printf("%d, ", number[i]);
    }

    printf("\n\n");

    for (int i = 1; i <= 2; i++) {
        int search;
        printf("輸入第%d次要找的數值:", i);
        scanf("%d", &search);

        int result = binary(number, 9, search);
        if (result != -1) {
            printf("Find! 位於排序後第 %d個位置\n", result + 1);
        } else {
            printf("Sorry! 找不到 %d...\n", search);
        }
    }

    return 0;
}
