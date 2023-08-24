// Accept charactors from user, store and display with loop

#include<stdio.h>
#include<string.h>
int main(){
    char a[7];
    char b[7];

    printf("Enter charactors: ");

    for(int i=0; i<7; i++){
        scanf("%c", &a[i]);
        b[i] = a[i];
    }

    for(int i=0; i<7; i++){
        printf("%c", b[i]);
    }  
}
