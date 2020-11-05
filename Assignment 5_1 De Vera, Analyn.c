#include<stdio.h>

int main()
{
    int num= 5;
    int *p;

    printf("Address of num= %p \n", &num);
    printf("Value of num= %d \n", num);

    p= &num;

    printf("\nAddress of ptr= %p \n", &p);
    printf("Value of ptr= %p \n", p);
    printf("Value of pointer ptr= %d \n", *p);

    return 0;

}
