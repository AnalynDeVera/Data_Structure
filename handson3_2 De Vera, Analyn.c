#include<stdio.h>
#define ROWS 3
#define COLUMNS 10

int main()
{

    int row, column;
    int sum[3][10];
    int a, b;

    for(a=0; a<3; a++)
    {
        row= a * 10;
        printf("%2d ", row);

        for (b=1; b<10; b++)
        {
            column= b ;

            sum [a][b]= row+column;
            printf ("%4d", sum [a][b]);
        }
        printf("\n");
    }

}
