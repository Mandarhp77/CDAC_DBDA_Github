// accept the elements and print it
#include<stdio.h>
int main(){
    int a[2][3];

    printf("Enter the array elements: ");
    
    for(int i=0; i<=1; i++){
        for(int j=0; j<=2; j++){
            scanf("%d", &a[i][j]);
        }    
    }

    for(int i=0; i<=1; i++){
        for(int j=0; j<=2; j++){
            printf("%d", a[i][j]);
        }    
    }
}