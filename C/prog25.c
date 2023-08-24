//factorial
#include<stdio.h>
int main(){
    int n =5, result=1;
    for(int i=5; i>0; i--){
        result = result * i;

    }
    printf("%d", result);
}