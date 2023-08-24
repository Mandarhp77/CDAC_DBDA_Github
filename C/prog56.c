// Accept limit from user and sum upto that limit

#include<stdio.h>
#include<string.h>

void limit(int);
int main(){
    int num;
    printf("Enter the limit: ");
    scanf("%d",&num);
    limit(num);
}

void limit(int x){
    int sum=0;
    for(int i=1; i<=x; i++){
        sum = sum + i;
    }
    printf("%d", sum);
}


