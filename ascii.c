#include <stdio.h>

int main() {
    char s[100];
    gets(s);
    for(int i=0;s[i];i++)
        printf("%c = %d\n", s[i], s[i]);
}