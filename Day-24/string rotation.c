#include<stdio.h>
int main(){
    char str1[100],str2[100];
    int len1=0,len2=0,i,j,k,flag=0;

    printf("Enter first string:");
    scanf("%s",str1);

    printf("Enter second string:");
    scanf("%s",str2);

    while(str1[len1]!='\0')
        len1=len1+1;

    while(str2[len2]!='\0')
        len2=len2+1;

    if(len1!=len2)
    {
        printf("String is not a rotation");
        return 0;
    }
    for(i=0;i<len1;i++)
    {
        for(j=0;j<len1;j++)
        {
            k=(i+j)%len1;

            if(str1[k]!=str2[j])
                break;
        }
        if(j==len1)
        {
            flag=1;
            break;
        }
    }
    if(flag)
        printf("String is a rotation");
    else
        printf("String is not a rotation");
    return 0;
}