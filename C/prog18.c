#include<stdio.h>
int main(){
    int n, result;
    printf("Enter number: ");
    scanf("%d",&n);
    for(int i=1 ; i<=10; i++){
        result = n * i;
        printf("%d\n", result);
    }
}