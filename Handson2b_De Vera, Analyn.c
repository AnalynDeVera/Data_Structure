#include<stdio.h>
#include<math.h>

double computeExponent ( int base, int exponent) //function
{
    double valEx;

    valEx= pow(base, exponent);

    return valEx;
}

int main ()
{
    int b, e;
    double ve;

    printf("Enter the base number: ");
    scanf("%d", &b);
    printf("Enter the exponent: ");
    scanf("%d", &e);

    ve= computeExponent (b, e);

    printf("%d raised to the %d power is %.2lf", b, e, ve);

    return 0;
}
