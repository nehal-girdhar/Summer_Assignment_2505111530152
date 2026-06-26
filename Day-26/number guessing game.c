#include<stdio.h>
int main(){
    int secret,guess,attempts=0;

    printf("Player 1,enter the secret number:");
    scanf("%d",&secret);

    printf("\nGuess the number!\n");
    do
    {
        printf("Enter your guess: ");
        scanf("%d",&guess);

        attempts=attempts+1;

        if(guess>secret)
        {
            printf("Too High!\n");
        }
        else if(guess<secret)
        {
            printf("Too Low!\n");
        }
        else
        {
            printf("Congratulations!You guessed the number.\n");
            printf("Total Attempts=%d",attempts);
        }
    } 
     while(guess!=secret);
    return 0;
}