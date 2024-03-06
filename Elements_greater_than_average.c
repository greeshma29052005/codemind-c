#include<stdio.h>
int main()
{
    int n,i,sum=0;
    scanf("%d",&n);
    int A[n];
    for(i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    int count=0;
    for(i=0;i<n;i++){
        sum=sum+A[i];
    }
    int avg=sum/n;
    for(i=0;i<n;i++){
       if(A[i]>=avg){
          count++;
       }
    }
    printf("%d",count);
}