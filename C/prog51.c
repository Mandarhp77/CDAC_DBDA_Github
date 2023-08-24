// concantenate two strings "Jay Hind"
#include<stdio.h>
#include<string.h>
int main(){
    char a[5]="Jay";
    char b[5]="Hind";
    char c[10];
    int index=0;

    int len1 = strlen(a);
    int len2 = strlen(b);

    for(int i=0; i<len1; i++){
        c[i]=a[i];
        index=i;
    }


    for(int i=index+1, j=0; j<len2; i++,j++){
        c[i]=b[j];
    }

    for(int i=0; i<len1+len2; i++){
        printf("%c",c[i]);
    }
}

