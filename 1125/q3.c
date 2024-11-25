#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    char eng_name[100];
    
    printf("input your chinese name: ");
    fgets(name, 100, stdin); 
    name[strlen(name) - 1] = '\0';
    printf("%s, hello\n", name);

    printf("input your english name: ");
    fgets(eng_name, 100, stdin);
    eng_name[strlen(eng_name) - 1] = '\0';
    printf("%s, hello\n\n", eng_name);

    printf("your chinese array: \n");
    printf("%s\n\n", name);

    printf("your english array: \n");

    for (int i = 0; i < strlen(eng_name); i++) {
        printf("eng_name[%d] = %c\n", i, eng_name[i]);
    }

    return 0;
}
