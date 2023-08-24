// to find the sum of the digonal elements
#include<stdio.h>
int main(){
    int a[3][3];
    int sum=0;

    printf("Enter the array elements: ");
    
    for(int i=0; i<=2; i++){
        for(int j=0; j<=2; j++){
            scanf("%d", &a[i][j]);
        }    
    }

    for(int i=0; i<=2; i++){
        for(int j=0; j<=2; j++){
            if(i==j){
                sum = sum +a[i][j];
            }
        }
    }
    printf("the sum of digonal element is %d\n", sum); 
}