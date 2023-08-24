// to print the tables from 1 to that array
#include<stdio.h>
int main(){
    int num, result;
    printf("Enter the Number");
    scanf("%d",&num);

    for(int i=1; i<=num; i++){
        for(int j=1; j<=10; j++){
            result = i*j;
            printf("%d\n", result);
        }
    printf("\n");
    }
}