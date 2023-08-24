//To find addition of int array with same index
#include<stdio.h>
int main(){
    int a[5]={1,2,3,4,5};
    int b[5]={2,3,4,5,6};
    int c[5];

    for(int i=0; i<5; i++){
        c[i]=a[i]+b[i];
    }

    for(int i=0; i<5; i++){
        printf("%d\n",c[i]);
    }  
}