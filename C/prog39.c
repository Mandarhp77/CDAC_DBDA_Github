//iniatlize and print 2d array 

#include<stdio.h>
int main(){
    int a[2][3]={1,2,3,4,5,6};

    for(int i=0; i<=1; i++){
        for(int j=0; j<=2; j++){
            printf("%d",a[i][j]);
        }    
    }
}
    