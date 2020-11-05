#include<stdio.h>
#define ROWS 10
#define COLUMNS 10

int main ()
{
    int row, column;
    int product[10][10];
    int a, b;

    printf("___________ MULTIPLICATION TABLE ___________\n\n");
    for (b=1; b <=10; b++ )


    for(a=0; a< 10; a++)
    {
        row= a+1;
        printf("%2d |", row);
        for (b=1; b<= 10; b++)
        {
            column= b;
            product [a][b]= row*column;
            printf ("%4d", product [a][b]);
        }
        printf("\n");
    }
}
