// add two integer with same index
#include<stdio.h>
int main(){
    int a[5]={1,2,3,4,5};
    int b[5]={6,7,8,9,10};
    int c[10];

    for(int i=0; i<=5; i++){
        c[i]=a[i];
    }

    for(int i=5, j=0 ; i<11, j<5 ; i++, j++){
        c[i]=b[j];
    }
    
    for(int j=0 ; j<10 ; j++){
        printf("%d",c[j]);
    }
} 