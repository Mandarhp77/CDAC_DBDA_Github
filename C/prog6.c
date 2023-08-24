#include<stdio.h>
int main(){
    float SI, principle, rate, period;
    printf("Enter the two principle, rate and period: ");
    scanf("%d%d%d",&principle,&rate,&period);

    SI = (principle*rate*period)/100;

    printf("The Simple interest is :%d", SI);
    
}