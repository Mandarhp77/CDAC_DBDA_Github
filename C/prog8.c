#include<stdio.h>
int main(){
    int n;
    printf("Enter the Numbers: ");
    scanf("%d",&n);
    if(n>0){
        printf("Entered number is Positive");
    }
    else if(n==0){
        printf("Entered number is Zero");
    }else{
        printf("Entered number is Negative");
    }

}