#include<stdio.h>
int palindrome(int);
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);

    if(palindrome(n))
        printf("Palindrome Number");
    else
        printf("Not a Palindrome Number");
    return 0;
}

int palindrome(int n)
{
    int temp,rev=0,rem;
    temp=n;

    while(n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(temp==rev)
        return 1;
    else
        return 0;
}