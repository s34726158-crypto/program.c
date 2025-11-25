#include<stdio.h>
#include <string.h>
struct book {
    int id;
    char title[50];
    char author[50];
};
int main(){
    struct book b1={101,"c programing", "denis retchie"};
    struct book b2={102,"Data structers","mark weiss"};
    struct book b3={103,"operating system","Silberscatz"};
     
    int searchID,i,found=0;
    printf("Enter book ID to search:");
    scanf("%d",&searchID);
    for(i=0;i<3;i++){
        if(books[i]->id==searchID){
            printf("\nBook Found:\n");
            printf("ID:%d\n",books[i]->id);
            printf("Title")
        }
    }
}