#include<stdio.h>

void payroll2 (void);

int main ()
{
    payroll2 ();

    return 0;
}

void payroll2 (void)
{
    int hour;
    double amount, salary;

    printf("No. of hours worked: ");
    scanf("%d", &hour);
    printf("Salary amount per hour: ");
    scanf("%lf", &amount);

    salary= amount * hour;

    printf("\nThe Total Salary is Php %.2lf", salary);

}


