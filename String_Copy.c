#include<stdio.h>
#include<string.h>
int main()
{
    char s1[1000],s2[1000];
    scanf("%[^
]s",s1);
    strcpy(s2,s1);
    printf("%s",s2);
    return 0;
}