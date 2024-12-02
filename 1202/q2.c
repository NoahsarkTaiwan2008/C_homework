#include <stdio.h>

int main() {
    int a[5] = {73, 168, 349, 229, 543};
    char b[6] = "BOOKS";
    char *c[3] = {"李", "銘", "諒"};

    for (int i = 0; i < 5; i++) {
        printf("a[%d] = %d\n", i, a[i]);
    }

    printf("整數陣列a中的每個元素各佔%d個Bytes\n", sizeof(a[0]));
    printf("整數陣列a記憶體空間總共佔%d個Bytes\n", sizeof(a));

    for (int i = 0; i < 5; i++) {
        printf("b[%d] = %c\n", i, b[i]);
    }

    printf("整數陣列b中的每個元素各佔%d個Bytes\n", sizeof(b[0]));
    printf("整數陣列b記憶體空間總共佔%d個Bytes\n", sizeof(b));

    for (int i = 0; i < 3; i++) {
        printf("c[%d] = %s\n", i, c[i]);
    }

    printf("整數陣列c中的每個元素各佔%d個Bytes\n", sizeof(c[0]));
    printf("整數陣列c記憶體空間總共佔%d個Bytes\n", sizeof(c));

    return 0;
}
