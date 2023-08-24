// Factorial by the recursion

#include<stdio.h>
void factorial(int);

int main(){
    int num;
    printf("Enter the Number for factorial: ");
    scanf("%d", &num);

    factorial(num);
}

void factorial(int num){
    static int result=1;
    static int i = 1;
    if(i<=num){
        result = result * i;
        i++;
        factorial(num);
    }else{
        printf("%d", result);
    }
}




