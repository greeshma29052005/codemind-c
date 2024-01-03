#include<stdio.h>
int main()
{
    int n,i,even=0,odd=0;
    scanf("%d",&n);
    int A[n];
    for(i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    for(i=0;i<n;i++){
        if(i%2==0){
            even=even+A[i];
        }
        else{
            odd=odd+A[i];
        }
    }
    printf("%d",even-odd);
}