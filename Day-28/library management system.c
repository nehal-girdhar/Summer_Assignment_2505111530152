#include<stdio.h>
struct Book
{
    int id;
    char name[50];
    char author[50];
    float price;
};

int main(){
    struct Book book[10];
    int n,i;

    printf("Enter number of books:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\nEnter details of Book %d\n",i+1);

        printf("Book ID:");
        scanf("%d",&book[i].id);

        printf("Book Name:");
        scanf("%s",book[i].name);

        printf("Author Name:");
        scanf("%s",book[i].author);

        printf("Price:");
        scanf("%f",&book[i].price);
    }
    printf("\n----- Library Records -----\n");

    for(i=0;i<n;i++)
    {
        printf("\nBook %d\n",i+1);
        printf("Book ID    :%d\n",book[i].id);
        printf("Book Name  :%s\n",book[i].name);
        printf("Author     :%s\n",book[i].author);
        printf("Price      :%.2f\n",book[i].price);
    }
    return 0;
}