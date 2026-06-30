#include<stdio.h>
int roll[10],n;
float marks[10];
char name[10][50];

void addStudents(){
    int i;

    printf("Enter number of students:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\nEnter details of Student %d\n",i+1);

        printf("Roll Number:");
        scanf("%d",&roll[i]);

        printf("Name:");
        scanf("%s",name[i]);

        printf("Marks:");
        scanf("%f",&marks[i]);
    }
}

void displayStudents(){
    int i;
    printf("\n----- Student Records -----\n");

    for(i=0;i<n;i++)
    {
        printf("\nStudent %d\n",i+1);
        printf("Roll Number:%d\n",roll[i]);
        printf("Name:%s\n",name[i]);
        printf("Marks:%.2f\n",marks[i]);
    }
}

int main(){
    int choice;
    do
    {
        printf("\n----- STUDENT MANAGEMENT SYSTEM -----\n");
        printf("1. Add Students\n");
        printf("2. Display Students\n");
        printf("3. Exit\n");

        printf("Enter your choice:");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                addStudents();
                break;

            case 2:
                displayStudents();
                break;

            case 3:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }
    } while(choice!=3);
    return 0;
}