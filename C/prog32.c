//add the elements from int array
#include<stdio.h>
int main(){
    int result=0, avg=0;
    int array[8] = {1,2,3,4,5,6,7,8,};

    for(int i=0; i<=7; i++){
        result = result + array[i];
    }
    printf("The sum is %d\n",result);
    avg = result/8;
    printf("The Average is %d\n",avg);
}