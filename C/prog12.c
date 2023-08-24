#include<stdio.h>
int main(){
    char a;
    printf("Enter the character: ");
    scanf("%c", &a);    // Charactor as an input

    if(a>64 && a<91){   // Compared as ASCII
        printf("This is a alphabet");
    }else if(a>96 && a<123){
        printf("This is alphabet");
    }else
        printf("This is not an alphabet");
}