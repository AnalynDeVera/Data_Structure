#include<stdio.h>

int main()
{
    int i, a[10];

    printf("Enter 10 integers: ");
    for (i=0; i< 10; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\nThe new values are: ");
    for (i=0; i<10; i++)
    {
        if ( a[i] %2 == 0)
        {
            a[i] = 2 + a[i];
        }
        if ( a[i] %2 != 0)
        {
            a[i]= 1 + a[i];
        }
            printf("%d ", a[i]);
    }

}

