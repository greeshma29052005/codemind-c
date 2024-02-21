#include<stdio.h>
#include<string.h>
int main()
{
    char s1[1000];
    int i;
    scanf("%s",s1);
    for(i=0;s1[i]!=NULL;++i);
    strlen(s1);
    printf("%d",i);
    return 0;
}