#include<stdio.h>
int main()
{
    int id[10],n,i;
    float salary[10];
    char name[10][50];

    printf("Enter number of employees:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\nEnter details of Employee %d\n",i+1);

        printf("Employee ID:");
        scanf("%d",&id[i]);

        printf("Employee Name:");
        scanf("%s",name[i]);

        printf("Salary:");
        scanf("%f",&salary[i]);
    }
    printf("\n----- Employee Records -----\n");

    for(i=0;i<n;i++)
    {
        printf("\nEmployee %d\n",i+1);
        printf("Employee ID   :%d\n",id[i]);
        printf("Employee Name :%s\n",name[i]);
        printf("Salary        :%.2f\n",salary[i]);
    }
    return 0;
}