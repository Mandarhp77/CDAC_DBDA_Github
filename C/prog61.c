// Fibonacci series by recursion

#include<stdio.h>
int main(){
    int a = 10;
    int *ptr = &a;
    
    printf("Value of variable is %d\n", a );
    printf("address of variable is %p\n", &a );

    printf("address of variable is %d\n", ptr );
    printf("Pointer dereference is %d\n", * ptr );
    printf("Address of the pointer is %p\n",  ptr );
}





