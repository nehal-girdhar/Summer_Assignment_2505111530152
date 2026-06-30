#include<stdio.h>
int main()
{
    int roll[10], n, i;
    float marks[10];
    char name[10][50];

    printf("Enter number of students:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\nEnter details of student %d\n",i+1);

        printf("Roll Number:");
        scanf("%d",&roll[i]);

        printf("Name:");
        scanf("%s",name[i]);

        printf("Marks:");
        scanf("%f",&marks[i]);
    }
    printf("\n----- Student Records -----\n");

    for(i=0;i<n;i++)
    {
        printf("\nStudent %d\n",i+1);
        printf("Roll Number:%d\n",roll[i]);
        printf("Name:%s\n",name[i]);
        printf("Marks:%.2f\n",marks[i]);
    }
    return 0;
}