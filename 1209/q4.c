#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("=== 到課人數 ===\n");
    
    char area[][15] = {"資工系", "餐飲系", "企管系", "總到課人數"};
    char date[][5] = {"12/9", "12/10", "12/11", "12/12", "12/13"};

    int mrt[6][4] = {
        {623, 341, 790, 13876},
        {701, 237, 843, 15309},
        {579, 431, 629, 12903},
        {514, 432, 561, 14351},
        {156, 294, 620, 9825},
        {56, 23, 78, 1678}
    };

    int area_sum[3] = {0};
    int i, j, total = 0;

    printf("\n日期\t%s\t%s\t\t%s\n", area[0], area[1], area[2]);
    printf("=================================================\n");

    for (i = 0; i < 5; i++) {
        printf("%s\t", date[i]);
        for (j = 0; j < 3; j++) {
            printf("%d\t\t", mrt[i][j]);
            area_sum[j] += mrt[i][j];
        }
        printf("\n");
    }

    for (i = 0; i < 3; i++) {
        total += area_sum[i];
    }

    for (i = 0; i < 4; i++) {
        printf("%s 載客量%d人次，", area[i], area_sum[i]);
        printf("資工系到課數 %d 人，佔%3.2f%%", )
        printf("佔%5.2f%%\n", (float)area_sum[i] / total * 100);
    }
}