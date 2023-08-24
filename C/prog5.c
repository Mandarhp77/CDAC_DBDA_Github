#include<stdio.h>
int main(){
    int a, b;
    printf("Enter the two Numbers: ");
    scanf("%d%d",&a, &b);
    
    a=a+b;
    b=a-b;
    a=a-b;

    printf("The swapped numbers are %d/t%d",a,b);
    
}