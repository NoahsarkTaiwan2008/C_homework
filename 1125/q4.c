#include <stdio.h>

int main() {
    int number[10];
    int i;

    printf("---尋找最大值---\n");
    printf("請隨意連續輸入10個數值\n");

    for (i = 0; i < 10; i++) {
        printf("請輸入第 %d 個資料:", i + 1);
        scanf("%d", &number[i]);
    }

    int max = number[0];  
    
    for (i = 1; i < 10; i++) {
        if (max < number[i]) {
            max = number[i];
        }
    }

    printf("最大值: %d\n", max);

    return 0;
}
