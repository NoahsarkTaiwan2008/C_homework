#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    printf("循序搜尋法\n\n");
    printf("隨機產生十個數字(1~50)\n\n");

    int number[10];

    for (int i = 0; i < 10; i++) {
        number[i] = rand() % 50 + 1;
    }

    printf("隨機產生的數字: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", number[i]);
    }
    printf("\n\n");

    printf("輸入要搜尋的數值: ");
    int search;
    scanf("%d", &search);

    int found = -1;
    for (int i = 0; i < 10; i++) {
        if (search == number[i]) {
            found = i;
            break;
        }
    }

    if (found != -1) {
        printf("數字 %d 是第 %d 個數字！\n", search, found);
    } else {
        printf("數字 %d 未在數組中找到。\n", search);
    }

    return 0;
}
