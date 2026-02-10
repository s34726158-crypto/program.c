#include <stdio.h>

int main() {
    char str[100];
    int seen[256] = {0}, i;

    printf("Enter a string: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++) {
        if (!seen[str[i]]) {
            printf("%c", str[i]);
            seen[str[i]] = 1;
        }
    }
    return 0;
}