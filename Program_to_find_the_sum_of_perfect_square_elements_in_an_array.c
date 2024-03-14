#include<stdio.h>
#include<math.h>
int PerfectSquareEle(int num){
    int i;
    float f;
    f=sqrt((double)num);
    i=f;
    if(i==f)
    return num;
    else
    return 0;
}
int main()
{
    int n,j;
    scanf("%d",&n);
    int A[n];
    for(j=0;j<n;j++){
        scanf("%d",&A[j]);
    }
    int sum=0;
    for(j=0;j<n;j++){
        sum+=PerfectSquareEle(A[j]);
    }
    printf("%d",sum);
}