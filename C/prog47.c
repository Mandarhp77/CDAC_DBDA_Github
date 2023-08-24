// to check 4 digits or not
#include<stdio.h>

void check(int);
int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    check(num);
}

void check(int a){
    if(a/10>=100 && a/10<=999){
        printf("The entered number have 4 digits");
    }else{
        printf("The entered number is not contains 4 digits");
    }
}