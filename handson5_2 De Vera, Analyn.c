#include<stdio.h>

int add ( int *a, int *b)
{
    int add;

    add= *a + *b;

    return add;
}

int main()
{
    int a, b;
    int sum;

    printf("Enter first integer: ");
    scanf("%d", &a);
    printf("Enter second integer: ");
    scanf("%d", &b);

    sum= add(&a, &b);

    printf("The sum of two integers is %d", sum);

    return 0;
}
