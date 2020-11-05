#include<stdio.h>

int main()
{
    int n, sum;

    printf("Enter a number: ");
    scanf("%d", &n);

    sum= (n*(n+1)*(2*n+1))/6;

    printf("\nThe sum of square is %d", sum);

    return 0;
}
