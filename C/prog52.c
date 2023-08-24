// convert from lower to upper string

#include<stdio.h>
#include<string.h>
int main(){
    char a[10];
    char result[10];
    printf("Enter string in lower case: ");
    scanf("%s", a);

    int len= strlen(a);
    for(int i=0; i<len; i++){
        result[i]=(a[i]-32);
        printf("%c", result[i]);
    }
}