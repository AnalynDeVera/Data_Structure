#include<stdio.h>

int main()
{
    int num1, num2, sum;
    int tf;


    printf("Enter two numbers: ");
    scanf("%d  %d", &num1, &num2);

    printf("Is the sum < 100?\t");

    sum=num1+num2;

    if (sum < 100)
    {
        printf("TRUE");
    }
    else
        printf("FALSE");

    return 0;
}
