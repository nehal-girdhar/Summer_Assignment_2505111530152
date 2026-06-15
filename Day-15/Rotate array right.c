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
    brr[0]=arr[n-1];

    for(i=1;i<n;i++)
    {
        brr[i]=arr[i-1];
    }
    printf("Array after right rotation:\n");

    for(i=0;i<n;i++)
    {
        printf("%d",brr[i]);
    }
    return 0;
}