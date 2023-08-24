//prime numbers from 1 to 100
#include<stdio.h>
int main(){
    int isprime=0;
    for(int i=2; i<=100; i++){
        for(int j=2; j>1; j--){
            if(i%j==0){
                isprime = 0;
            }else{
                printf("%d",&i);
            }
        }    
    }
}