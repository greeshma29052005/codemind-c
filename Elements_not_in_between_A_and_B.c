#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int A[n];
    for(i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    int x,y,cnt=0;
    scanf("%d%d",&x,&y);
    for(i=0;i<n;i++){
        if(A[i]<x || A[i]>y){
            printf("%d ",A[i]);
            cnt=1;
            
        }
    }
    if(cnt == 0){
        printf("-1");
    }
}