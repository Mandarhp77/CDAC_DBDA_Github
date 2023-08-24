// accept the elements in 2D array
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
            printf("%d ", a[j][i]);
        }    
    }
}