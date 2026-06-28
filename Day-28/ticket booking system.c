#include<stdio.h>
struct Ticket
{
    char name[50];
    int age;
    int seats;
    float totalFare;
};

int main(){
    struct Ticket t;
    float fare=500;

    printf("Enter Passenger Name:");
    scanf("%s",t.name);

    printf("Enter Age:");
    scanf("%d",&t.age);

    printf("Enter Number of Seats:");
    scanf("%d",&t.seats);

    t.totalFare=fare*t.seats;

    printf("\n----- TICKET DETAILS -----\n");
    printf("Passenger Name :%s\n",t.name);
    printf("Age            :%d\n",t.age);
    printf("Seats Booked   :%d\n",t.seats);
    printf("Fare per Seat  :%.2f\n",fare);
    printf("Total Fare     :%.2f\n",t.totalFare);
    return 0;
}