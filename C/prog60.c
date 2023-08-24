// Fibonacci series by recursion

#include<stdio.h>
void series(int,int,int);

int main(){
    int num;
    int a=0;
    int b=1;
    printf("Enter the Number for series: ");
    scanf("%d", &num);
    //printf("%d", 0);

    series(a,b,num);
}

void series(int a, int b, int num){
    static int result=0;
    static int i=1;

    if(i<=num){
        result = a+b;
        a=b;
        b=result;

        i++;
        printf("%d\t", result);
        series(a,b,num);
        
    }
}




