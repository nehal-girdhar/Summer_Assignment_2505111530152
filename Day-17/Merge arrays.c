#include<stdio.h>
int main(){
    int arr[200],n1,n2,i;

    printf("Enter size of first array:");
    scanf("%d",&n1);

    printf("Enter elements of first array:\n");
    for(i=0;i<n1;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter size of second array:");
    scanf("%d",&n2);

    printf("Enter elements of second array:\n");
    for(i=0;i<n2;i++)
    {
        scanf("%d",&arr[n1+i]);
    }
    printf("Merged array:\n");
    for(i=0;i<n1+n2;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}