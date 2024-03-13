#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int i,j;
    scanf("%[^
]s",s);
    int len=strlen(s);
    for(i=0,j=len-1;i<=j;i++,j--){
        char c = s[i];
        s[i]=s[j];
        s[j]=c;
    }
    printf("%s",s);
}