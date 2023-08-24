// Factorial upto that number
#include<stdio.h>
int main(){
    int num, result=1;
    printf("Enter the Number: ");
    scanf("%d", &num);
    for(int i = 1; i<=num; i++){
        result = result*i;
    }
    printf("%d",result);
    return 0;
}