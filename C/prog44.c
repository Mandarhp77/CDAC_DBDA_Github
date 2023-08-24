//count the numbers from 2d array
#include<stdio.h>
int main(){
    int a[3][3]= {{1,2,3},{4,5,3},{7,8,3}};
    int n;
    int count=0;
    int flag=0;
    
    printf("Enter the number: ");
    scanf("%d", &n);

    for(int i=0; i<=2; i++){
        for(int j=0; j<=2; j++){
            if(n==a[i][j]){
                count++;
                flag=1;
            }
        }    
    }
    if(flag==1){
        printf("The Entered number %d is present and repeats %d times", n, count);
    }else{
        printf("The Entered number is missing");
    }
}