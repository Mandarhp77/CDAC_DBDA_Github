#include<stdio.h>
int main(){
    int n;
    printf("Enter the Numbers: ");
    scanf("%d",&n);
    if(n % 2 == 0){
        printf("This is Even number");     
    }else{
        printf("This is odd number");
    }
}