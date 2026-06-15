#include<stdio.h>
int main(){
    int arr[100],brr[100],n,i;

    printf("Enter number of elements:");
    scanf("%d",&n);

    printf("Enter array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++)
    {
        brr[i]=arr[i+1];
    }
    brr[n-1]=arr[0];

    printf("Array after left rotation:\n");
    for(i=0;i<n;i++)
    {
        printf("%d",brr[i]);
    }
    return 0;
}