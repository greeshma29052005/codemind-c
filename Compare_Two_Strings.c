#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100],s2[100];
    int value;
    scanf("%s %s",&s1 ,&s2);
    value = strcmp(s2,s1);
    if (value == 0){
        printf("Strings are Equal");
    }
    else{
        printf("Strings are not Equal");
    }
    return 0;
}