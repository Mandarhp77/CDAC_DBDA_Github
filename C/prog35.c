// find the greator number in int array
#include<stdio.h>
int main(){
    int a[5]={1,2,10,4,50};
    int temp=0;

    for(int i=0; i<5; i++){
        if(a[i]>temp){
            temp = a[i];
        }
    }
    printf("%d",temp);
} 
