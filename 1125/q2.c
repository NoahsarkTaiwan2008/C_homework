#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main() {
    char name[100];
    char true_name[100] = "ben";
    char random_char[1001];

    printf("Input your English name: ");
    scanf("%s", name);

    if (strcmp(name, true_name) == 0) {
        srand(time(NULL));

        for (int i = 0; i < 1000; i++) {
            random_char[i] = 'A' + (rand() % 26);
        }

        random_char[1000] = '\0';

        printf("1000 random chars:\n");
        for (int i = 1; i <= 1000; i++) {
            printf("random_char[%d] = %c\n", i, random_char[i - 1]);
        }
    } else {
        printf("error >> logout!");
        return 0;
    }

    return 0;
}
