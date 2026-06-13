#include<stdio.h>
int main(){
    int arr[100],n,i;
    int even=0,odd=0;

    printf("Enter number of elements:");
    scanf("%d",&n);

    printf("Enter array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
            even=even+1;
        else
            odd=odd+1;
    }
    printf("Even elements=%d\n",even);
    printf("Odd elements=%d",odd);
    return 0;
}