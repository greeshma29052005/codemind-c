#include<stdio.h>
int main()
{
    int i,n,key;
    scanf("%d",&n);
    int A[n];
    for(i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    scanf("%d",&key);
    for(i=0;i<n;i++){
        if(A[i]==key){
            printf("True");
            return 0;
        }
    }
    printf("False");
}