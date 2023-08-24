#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the Three Numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    if(a<b && a<c){
        printf("A is smallest number");
    }else if(a>b && b<c){
        printf("B is smallest number");
    }else{
        printf("C is smallest number");
    }
}