// accept the string store into another variable
#include<stdio.h>
int main(){
    char a[10];
    char b[10];

    printf("Enter the string 1: ");
    scanf("%s",a);
    
    for(int i=0; a[i]!='\0'; i++){
        b[i]=a[i];
    }

    printf("Entered string is %s",b);
    
}
   