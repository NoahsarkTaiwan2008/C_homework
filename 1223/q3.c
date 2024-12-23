#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int choose[7];
    int num = 7;
    int choice;

    srand((unsigned) time(NULL));

    for (int i = 0; i < num; i++) {
        choice = rand() % 38 + 1;
        choose[i] = choice;
    }

    printf("\n 本期威力彩第一區 電腦選號 號碼: \n\n");

    for (int i = 0; i < num - 1; i++) {
        printf(" %d", choose[i]);
    }

    printf("\n 本期威力彩第二區 電腦選號 號碼: \n\n");
    int two = rand() % 7 + 1;
    printf(" %d", two);

    return 0;
}
