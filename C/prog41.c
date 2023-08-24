//to find the sum of row elements
#include<stdio.h>
int main(){
    int a[2][3];
    int sum=0;

    printf("Enter the array elements: ");
    
    for(int i=0; i<=1; i++){
        for(int j=0; j<=2; j++){
            scanf("%d", &a[i][j]);
        }    
    }

    for(int i=0; i<=1; i++){
        for(int j=0; j<=2; j++){
            sum = sum + a[i][j];
        }  
    
    printf("the sum of row%d %d\n",i+1, sum); 
    sum = 0; 
    }
}