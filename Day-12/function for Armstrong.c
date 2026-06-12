#include<stdio.h>
int armstrong(int);
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);

        armstrong(n);

    return 0;
}

int armstrong(int n)
{
    int temp,d,sum=0;
    temp=n;

    while(n>0)
    {
        d=n%10;
        sum=sum+(d*d*d);
        n=n/10;
    }

    if(sum==temp)
        {
            printf("armstrong");
        }
    else
        {
            printf("not armstrong");
        }
}