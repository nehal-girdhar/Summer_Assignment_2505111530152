#include<stdio.h>
int maximum(int, int);
int main(){
    int a,b,max;

    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);

    max=maximum(a,b);
    printf("the bigger number=%d",max);
    return 0;
}
int maximum(int x,int y)
{
    if(x>y)
        return x;
    else
        return y;
}