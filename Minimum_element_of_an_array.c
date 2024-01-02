#include<stdio.h>
int main()
{
    int n,i,min,location;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    min=arr[0];
    for(i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
            location=i+1;
        }
    }
    printf("%d",min);
}