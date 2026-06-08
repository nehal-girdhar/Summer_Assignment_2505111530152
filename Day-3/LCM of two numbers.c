#include<stdio.h>

int gcd(int,int);
int lcm(int,int);

int main(){
    int a,b;
    printf("enter two numbers:");
    scanf("%d%d",&a,&b);
    printf("LCM is=%d",lcm(a,b));
    return 0;
}

int gcd(int a,int b)
{
    if (b==0)
        return a;
    else
        return gcd(b,a%b);
}

int lcm(int a,int b)
{
    return (a*b)/gcd(a,b);
}