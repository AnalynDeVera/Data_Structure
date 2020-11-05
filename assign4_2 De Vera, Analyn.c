#include<stdio.h>

int main()
{
    int num[5];
    int i, sum=0;

    printf("Enter 5 integers: ");
    for( i = 0; i <5; i++)
    {
        scanf("%d", &num[i]);
    }
    printf("\nThe value of integers are: ");
    for ( i = 0; i<5; i++)
    {
    	printf("%d  ", num[i]);
    }
      
    printf("\n\nThe sum of array integers is: ");
    for (i=0; i<5; i++)
    {
        sum= sum+num[i];
    }
    printf("%d", sum);

    return 0;
}