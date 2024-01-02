#include<stdio.h>
int main()
{
    int n,i,max,location;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    for(i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
            location=i+1;
        }
    }
    printf("%d",max);
}