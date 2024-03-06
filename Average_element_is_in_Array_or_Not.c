#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int A[n];
    for(i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    int count=0;
    for(i=0;i<n;i++){
        count+=A[i];
    }
    float avg=count/n;
    int ele=0;
    for(i=0;i<n;i++){
        if(avg==A[i])
        ele++;
    }
    if(ele>0){
        printf("True");
    }
    else{
        printf("False");
    }
}