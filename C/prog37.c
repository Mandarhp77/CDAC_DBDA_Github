//initalize and print 1D charactor array
#include<stdio.h>
int main(){
    char name[8] = {'J','a','y','-','H','i','n','d'};

    for(int i=0; i<8; i++){
        printf("%c",name[i]);
    }
}