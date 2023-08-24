// To check Plindrome
#include<stdio.h>
#include<string.h>
int main(){
    char a[10];
    int len;
    int flag =0;

    printf("Enter the string: ");
    scanf("%s",a);

    len= strlen(a);
    
    for(int i=0, j=len-1; i<len; i++,j--){
        if(a[i] != a[j]){
            flag = 1;
            break;
        }else{
            flag=0;
        }
    }

    if(flag==1){
        printf("Not a Palindrome");
    }else{
        printf("Palindrome");
    }
}
