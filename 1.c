#include <stdio.h>

int main() {
    char str[100];
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        printf("%c", str[i] ^ 0);
    }
  
    return 0;
}

// Enter a string: Hello
// Hello