#include<stdio.h>
int main()
{
    int n,i,odd;
    scanf("%d",&n);
    int A[n];
    for(i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    for(i=n-1;i>0;i--){
        if(A[i]%2==1){
            printf("%d",A[i]);
            break;
        }
    }    
}