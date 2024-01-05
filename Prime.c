#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int fact_cnt=0;
    for(i=1;i<=n;i++){
        if(n%i==0){
            fact_cnt++;
        }
    }
    if(fact_cnt==2){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
}