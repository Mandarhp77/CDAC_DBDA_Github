#include<stdio.h>
int main(){
    int a, b, temp;
    printf("Enter the two Numbers: ");
    scanf("%d%d",&a, &b);

    temp = a;
    a=b;
    b=temp;
    
    printf("Swapped numbers are %d\t%d\n",a,b);
    
}