#include<stdio.h>
int main()
{
    int m,n,i,j,sum=0;
    scanf("%d%d",&m,&n);
    int mat[m][n];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            sum+=mat[i][j];
        }
    }
    printf("%d",sum);
}