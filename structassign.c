#include<stdio.h>

struct cricketer
{
    char name[50];
    int age;
    int test;
    int crick;
    float average;

};
int main()
{
    struct cricketer record[10];
    int i;

    printf("=======INPUT THE INFORMATION OF CRICKETER=======\n");

    for (i=0; i<10; i++)
    {
        record[i].crick= i+1;
        printf("\nCRICKETER NUMBER %d\n\n", record[i].crick);
        printf("Enter name: ");
        scanf("%s", record[i].name);
        printf("Enter age: ");
        scanf("%d", &record[i].age);
        printf("Enter test matches: ");
        scanf("%d", &record[i].test);
        printf("Enter average: ");
        scanf("%f", &record[i].average);
        printf("\n");
    }
    printf("\n======= DISPLAYING INFORMATION OF CRICKETER.....=======\n\n");

    for (i=0; i<10; ++i)
    {
        printf("\nINFORMATION OF CRICKETER %d: \n", i+1);
        printf("\nName: ");
        puts(record[i].name);
        printf("Age: %d", record[i].age);
        printf("\nTest Matches: %d", record[i].test);
        printf("\nAverage: %.1f\n", record[i].average);
    }
    return 0;
}
