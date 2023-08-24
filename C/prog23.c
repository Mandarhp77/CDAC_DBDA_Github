// To cheak no is prime or not
#include<stdio.h>
int main(){
    int num, isprime=0;
    printf("Enter the number: ");
    scanf("%d", &num);
    for(int i=num-1; i>1; i--){
        if(num%i==0){
            isprime = 0;
        }else{
            isprime = 1;
        }
    }

    if (isprime == 0){
        printf("This is not a prime number");
    }else{
        printf("This is prime number");
    }
}
