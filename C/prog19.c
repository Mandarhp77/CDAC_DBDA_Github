#include<stdio.h>
int main(){
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);

    if(a<b){
        for(int i=a; i<=b; i++){
            printf("%d\n", i);
        }
    }else if(a>b){
        for(int i=a; i>=b; i--){
            printf("%d\n", i);
        }
    }else{
        printf("Both are Same number");
    }
}
