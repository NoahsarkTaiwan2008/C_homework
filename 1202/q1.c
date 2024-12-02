#include <stdio.h>

int main() {
    int a[10];
    int i = 0, all = 0;
    int ans;

    printf("----- 找到平均值 -----\n");
    printf("輸入10個數值：\n");

    for (i = 0; i < 10; i++) {
        printf("輸入第%d個資料: ", i + 1);
        scanf("%d", &a[i]);
    }

    for (i = 0; i < 10; i++) {
        all += a[i];
    }

    ans = all / 10;

    printf("平均值: %d\n", ans);

    return 0;
}