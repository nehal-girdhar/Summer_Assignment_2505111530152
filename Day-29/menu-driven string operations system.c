#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int choice,i,length=0;

    printf("Enter a string:");
    scanf("%s",str);

    printf("\n----- STRING MENU -----\n");
    printf("1. Find Length\n");
    printf("2. Reverse String\n");
    printf("3. Convert to Uppercase\n");
    printf("4. Check Palindrome\n");
    printf("Enter your choice:");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
            while(str[length]!='\0')
                length=length+1;

            printf("Length=%d",length);
            break;

        case 2:
            while(str[length]!='\0')
                length=length+1;

            printf("Reversed String:");

            for(i=length-1;i>=0;i--)
                printf("%c",str[i]);
            break;

        case 3:
            for(i=0;str[i]!='\0';i++)
            {
                if(str[i]>='a' && str[i]<='z')
                    str[i]=str[i]-32;
            }
            printf("Uppercase String:%s",str);
            break;

        case 4:
            while(str[length]!='\0')
                length=length+1;

            for(i=0;i<length/2;i++)
            {
                if(str[i]!=str[length-1-i])
                {
                    printf("Not a Palindrome");
                    return 0;
                }
            }
            printf("Palindrome String");
            break;

        default:
            printf("Invalid Choice");
    }
    return 0;
}