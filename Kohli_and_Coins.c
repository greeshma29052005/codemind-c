#include<stdio.h>
int main()
{
    int x,total;
    scanf("%d",&x);
    if(x%5==0){
        int tens = x/10;
        int fives = (x%10)/5;
        total=tens+fives;
        printf("%d",total);
    }
    else{
        printf("-1
");
    }
}