#include<stdio.h>
#include<math.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int A[n];
    for(i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    int sum1=0,sum2=0,sum=0;
    for(i=0;i<n;i++){
        if(A[i]%2==0){
            sum1=sum1+A[i];
        }
    }
    for(i=0;i<n;i++){
        if(A[i]%2!=0){
            sum2=sum2+A[i];
        }
    }
    printf("%d",abs(sum1-sum2));
}