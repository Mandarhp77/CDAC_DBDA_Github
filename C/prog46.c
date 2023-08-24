// Function to determine the area f square
#include<stdio.h>

void square(int);
int main(){
    int side;
    printf("Enter the side length: ");
    scanf("%d",&side);
    square(side);
}

void square(int a){
    int c;
    c=a*a;
    printf("The Square is %d", c);
}