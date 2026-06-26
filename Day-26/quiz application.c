#include<stdio.h>
int main(){
    int choice,score=0;

    printf("***** QUIZ APPLICATION *****\n");

    printf("\n1. Which language is used for C programming?\n");
    printf("1. Java\n2. C\n3. Python\n4. HTML\n");
    scanf("%d",&choice);

    switch(choice)
    {
        case 2:
            score=score+1;
            break;
    }

    printf("\n2. What is the capital of India?\n");
    printf("1. Delhi\n2. Mumbai\n3. Chennai\n4. Kolkata\n");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
            score=score+1;
            break;
    }

    printf("\n3. 10 + 20 = ?\n");
    printf("1. 20\n2. 30\n3. 40\n4. 50\n");
    scanf("%d",&choice);

    switch(choice)
    {
        case 2:
            score=score+1;
            break;
    }
    printf("\nTotal Score=%d/3\n",score);
    return 0;
}