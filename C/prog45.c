// Addition with function
#include<stdio.h>

void sum(int,int);
int main(){
    int a,b;
    printf("Enter the two numbers: ");
    scanf("%d%d",&a,&b);
    sum(a, b);
}

void sum(int x, int y){
    int c;
    c=x+y;
    printf("The addition is %d", c);
}