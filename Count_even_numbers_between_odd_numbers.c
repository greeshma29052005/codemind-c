#include<stdio.h>
int main()
{
    int n,i,cnt=0;
    scanf("%d",&n);
    int A[n];
    for(i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    for(i=0;i<n-1;i++){
        if(A[i]%2==1 && A[i+2]%2==1){
            if(A[i+1]%2==0);
            cnt++;
        }
    }
    printf("%d",cnt);
}