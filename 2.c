#include <stdio.h>

int main() {
    char str[100];
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("AND result: ");
    for (i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        printf("%c", str[i] & 127);
    }

    printf("\nXOR result: ");
    for (i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        printf("%c", str[i] ^ 127);
    }

    printf("\n");
    return 0;
}

// Enter a string: ABC
// AND result: ABC
// XOR result: >=>