//To find the number in the string
#include<stdio.h>
int main(){
    int num, ispresent=0;
    int array[8] = {1,2,3,4,5,6,7,8,};
    printf("Enter the number: ");
    scanf("%d",&num);

    for(int i=0; i<=7; i++){
        if(num==array[i]){
            ispresent = 1;
        }
    }
    if(ispresent==1){
        printf("Number is found");
    }else{
        printf("Number is missing");
    }
}