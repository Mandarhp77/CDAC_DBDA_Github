#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the two Number");
    scanf("%d%d",&a,&b);
    if(a>b){
        printf("number A is greator");
    }else if(b>a){
        printf("number B is greator"); 
    }else{
        printf("Both are same "); 
    }
    
}