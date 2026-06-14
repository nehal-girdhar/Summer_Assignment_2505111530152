#include<stdio.h>
int main(){
    int arr[100],n,i,num,count=0;

    printf("Enter number of elements:");
    scanf("%d",&n);

    printf("Enter array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter element to find frequency:");
    scanf("%d",&num);

    for(i=0;i<n;i++)
    {
        if(arr[i]==num)
            count=count+1;
    }
    printf("Frequency of %d=%d",num,count);
    return 0;
}