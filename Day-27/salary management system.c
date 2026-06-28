#include<stdio.h>
struct Employee
{
    int id;
    char name[50];
    float basic,hra,da,netSalary;
};

int main(){
    struct Employee emp[10];
    int n,i;

    printf("Enter number of employees:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\nEnter details of employee %d\n",i+1);

        printf("Employee ID:");
        scanf("%d",&emp[i].id);

        printf("Employee Name:");
        scanf("%s",emp[i].name);

        printf("Basic Salary:");
        scanf("%f",&emp[i].basic);

        printf("HRA:");
        scanf("%f",&emp[i].hra);

        printf("DA:");
        scanf("%f",&emp[i].da);

        emp[i].netSalary=emp[i].basic+emp[i].hra+emp[i].da;
    }
    printf("\n----- Salary Details -----\n");

    for(i=0;i<n;i++)
    {
        printf("\nEmployee %d\n",i+1);
        printf("ID:%d\n",emp[i].id);
        printf("Name:%s\n",emp[i].name);
        printf("Basic Salary:%.2f\n",emp[i].basic);
        printf("HRA:%.2f\n",emp[i].hra);
        printf("DA:%.2f\n",emp[i].da);
        printf("Net Salary:%.2f\n",emp[i].netSalary);
    }
    return 0;
}