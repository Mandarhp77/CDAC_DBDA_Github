// Base raised to index by recursion

#include<stdio.h>
void degree(int , int);

int main(){
    int base;
    int index;
    printf("Enter the base: ");
    scanf("%d", &base);

    printf("Enter the index: ");
    scanf("%d", &index);

    degree(base, index);
}

void degree(int base, int index){
    static int result=1;
    static int i = 1;
    if(i<=index){
        result = result * base;
        i++;
        degree(base,index);
    }else{
        printf("%d", result);
    }
}




