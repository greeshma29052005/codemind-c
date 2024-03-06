#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int A[n];
    for(i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    int m,cnt=0;
    scanf("%d",&m);
    for(i=0;i<n;i++){
        if(A[i]==m){
            cnt++;
        }
    }
    printf("%d",cnt);
}