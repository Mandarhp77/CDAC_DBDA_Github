// Accept limit from user and sum upto that limit

#include<stdio.h>
#include<string.h>

void sum(int);
int main(){
    int num;
    printf("Enter the limit: ");
    scanf("%d",&num);
    limit(num);
}

void sum(int x){
    int sum=0;
    sum=sum+ sum(x);
}


