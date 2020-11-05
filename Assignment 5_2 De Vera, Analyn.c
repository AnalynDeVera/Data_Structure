#include<stdio.h>

int main()
{
    int arr[5];
    int *p1, *p2;

    for( int i=0; i<5; i++)
    {
        printf("Enter the 1st value of array: ");
        scanf("%d", &arr[i]);
    }

    p1= &arr[3];
    printf("\nThe value of 3rd array is: %d", *p1);

    p2= p1-2;
    printf("\nThe value of 2nd array is: %d", *p2);

    return 0;
}
