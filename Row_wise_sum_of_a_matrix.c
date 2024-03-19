#include<stdio.h>
int main()
{
    int i,j,n,m,sum=0;
    scanf("%d%d",&n,&m);
    int A[n][m];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&A[i][j]);
        }
    }
    for(i=0;i<n;i++){
        int rsum=0;
        for(j=0;j<m;j++){
            rsum+=A[i][j];
        }
        printf("%d ",rsum);
    }
}