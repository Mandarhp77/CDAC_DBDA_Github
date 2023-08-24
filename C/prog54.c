// Accept string and charactor from user and replace charactor with *

#include<stdio.h>
#include<string.h>
int main(){
    char a[10];
    char b;
    char result[10];
    int len;
    

    printf("Enter string: ");
    scanf("%s", a);
    len = strlen(a);

    printf("Enter charactor: ");
    scanf(" %c", &b);

    for(int i=0; i<len; i++){
        if(b==a[i]){
            result[i]='*';
        }else{
            result[i]=a[i];
        }
    }

    for(int i=0; i<len; i++){
        printf("%c", result[i]);
    }
}