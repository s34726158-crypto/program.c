#include <stdio.h>
#include <stdlib.h>

int main() {
    int*c;
    // (Aloocate memory for one integer
    c= (int*)malloc(sizeof(int));

    // Check if memory is allocated
    if(c== NULL)

{
printf("Memory allocation failed");
return 1;
}
*c = 25;

printf("Value of c= %d", *c);
    free(c);
    return 0;
}