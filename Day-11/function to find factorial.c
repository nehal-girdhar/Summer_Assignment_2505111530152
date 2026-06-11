#include<stdio.h>
int factorial(int);
int main(){
    int n,fact;

    printf("Enter a number:");
    scanf("%d",&n);
    if(n<0)
        {
            printf("Factorial does not exist");
        }    
    else
    {    fact=factorial(n);
        printf("the factorial is=%d",fact);
    }
    return 0;
}

int factorial(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    return (f);
}