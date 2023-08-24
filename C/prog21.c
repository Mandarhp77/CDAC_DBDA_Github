// base raised to index
#include<stdio.h>
int main(){
    int base, index, result=1;
    printf("Enter the base and index: ");
    scanf("%d%d", &base, &index);
    for(int i=1; i<=index; i++){
        result = result*base;
    }
    printf("%d", result);
    return 0;
}