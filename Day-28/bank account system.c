#include<stdio.h>
struct Bank
{
    int accNo;
    char name[50];
    float balance;
};

int main(){
    struct Bank customer;
    int choice;
    float amount;

    printf("Enter Account Number:");
    scanf("%d",&customer.accNo);

    printf("Enter Customer Name:");
    scanf("%s",customer.name);

    printf("Enter Initial Balance:");
    scanf("%f",&customer.balance);

    printf("\n1.Deposit\n");
    printf("2.Withdraw\n");
    printf("Enter your choice:");
    scanf("%d",&choice);

    if(choice==1)
    {
        printf("Enter amount to deposit:");
        scanf("%f",&amount);

        customer.balance=customer.balance+amount;

        printf("Deposit Successful.\n");
    }
    else if(choice==2)
    {
        printf("Enter amount to withdraw:");
        scanf("%f",&amount);

        if(amount<=customer.balance)
        {
            customer.balance=customer.balance-amount;
            printf("Withdrawal Successful.\n");
        }
        else
        {
            printf("Insufficient Balance.\n");
        }
    }
    else
    {
        printf("Invalid Choice.\n");
    }

    printf("\n----- Account Details -----\n");
    printf("Account Number :%d\n",customer.accNo);
    printf("Customer Name  :%s\n",customer.name);
    printf("Balance        :%.2f\n",customer.balance);
    return 0;
}