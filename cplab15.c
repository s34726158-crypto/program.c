#include<stdio.h>
int main() {
    FILE*fp;
    fp = fopen("example.txt","w");//create or open file for writting
    if(fp == NULL) {
        printf("File opening failed!\n");
        return 1;
    }
    printf("File opened successfully using fopen().\n");
    fclose(fp);//close the file
    printf("File closed successfully using fclose().\n");
    return 0;
}