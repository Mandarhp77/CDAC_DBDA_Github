// fibanachi series
#include<stdio.h>
int main(){
    int a = 0, b = 1, num, result=0;
    printf("Enter the number: ");
    scanf("%d", &num);

    for(int i = 1; i<num; i++){
        result = a+b;
        a=b;
        b=result;
        printf("%d    ", result);

    }
   
}