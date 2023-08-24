#include<stdio.h>
int main(){
    int sub1, sub2,sub3,sub4,sub5,sum,avg;
    
    printf("Enter the marks of 5 subjects: ");
    scanf("%d%d%d%d%d",&sub1,&sub2,&sub3,&sub4,&sub5);
    sum = sub1+sub2+sub3+sub4+sub5;
    avg = sum/5;
    printf("The sum of Entered marks is %d", sum);
    printf("The Average of entered marks is %d\n",avg);

}