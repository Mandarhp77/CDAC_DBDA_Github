//accept each charactor and print each element
#include<stdio.h>
int main(){
    char name[7];
    printf("Enter the string elements: ");

    for(int i=0; i<7; i++){
        scanf("%c",name[i]);
    }
    
    for(int i=0; i<7; i++){
        printf("%c",name[i]);
    }
}