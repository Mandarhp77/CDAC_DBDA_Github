#include<stdio.h>
int main(){
    int n;
    printf("Enter the Number");
    scanf("%d", &n);
    int i = 1;
    while(i<=n){
        printf("%d\n",i);
        i++;
    }
}