#include<stdio.h>

int main()
{

    char favletter, *p1;
    int favnum, *p2;
    double money, *p3;


    printf("Enter your favorite letter: ");
    scanf("%c", &favletter);
    printf("Enter your favorite number: ");
    scanf("%d", &favnum);
    printf("Enter your current money: ");
    scanf("%lf", &money);

    p1= &favletter;
    p2= &favnum;
    p3= &money;

    printf("\nYour favorite letter is %c, its memory address is %p", *p1, p1);
    printf("\nYour favorite number is %d, its memory address is %p", *p2, p2);
    printf("\nYour current money is %.2lf, its memory address is %p", *p3, p3);

    return 0;
}
