#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int i,count=0;
    scanf("%[^
]s",s);
    for(i=0;s[i]!=NULL;i++){
        if(s[i]>='a' && s[i]<='z'){
            count++;
        }
    }
    printf("%d",count);
}