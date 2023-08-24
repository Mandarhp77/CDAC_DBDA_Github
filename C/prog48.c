// to compare the two strings
#include<stdio.h>
#include<string.h>

int main(){
    char a[10];
    char b[10];
    int flag=0;
    int len1=0;
    int len2=0;

    printf("Enter the string 1: ");
    scanf("%s",a);

    printf("Enter the string 2: ");
    scanf("%s",b);

    len1= strlen(a);
    len2= strlen(b); 
    int i=0;
    int j=0;
    
    while(i<len1 || j<len2){
        if(a[i]!=b[j])
        {   //for comparision of each elements in string
            flag=1;
            break;   
        }else
        {
            flag =0;    
        }
        i++; 
        j++;
    }

    if(flag==1){    
         printf("Entered strings are different");       // To check flag value
    }
    else{
        printf("Entered strings are same");
       
    }
}
           
