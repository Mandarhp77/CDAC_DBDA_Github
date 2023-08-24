// Accept string and print into reverse order

#include<stdio.h>
#include<string.h>
int main(){
    char a[10];
    int i,j;
    char result[10];
    printf("Enter string: ");
    scanf("%s", a);

    int len= strlen(a);

    for(i=len-1, j=0; i>=0; i--,j++){
        result[j]=(a[i]);
    }

    for(i=0; i<len; i++){
        printf("%c", result[i]);
    }
}