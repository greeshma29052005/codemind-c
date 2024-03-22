#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    int i,len,flag=0;
    scanf("%s",str);
    len=0;
    while(str[len]!=NULL){
        len++;
    }
    for(i=0;i<len;i++){
        if(str[i]!=str[len-i-1]){
            flag=1;
            break;
        }
    }
    if(flag){
        printf("Not Palindrome");
    }
    else{
        printf("Palindrome");
    }
    return 0;
}