#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int A[n];
    for(i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    int x,y,sum=0;
    scanf("%d%d",&x,&y);
    for(i=0;i<n;i++){
        if(A[i]<x || A[i]>y){
            sum+=A[i];
        }
    }
    printf("%d",sum);
}