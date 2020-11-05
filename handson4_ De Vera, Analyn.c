#include<stdio.h>

int corrIndex();

int main()
{
    corrIndex();
    return 0;
}

int corrIndex()
{
    int i, product;
    int num[11];

    for (i=1; i<11; i++)
    {
        +1;
        printf("Enter value %d: ", i);
        scanf("%d", &num[i]);
    }
    printf("\n");
    for (i=1; i<11; ++i)
    {
        +1;
        product= (i-1)* num[i];
        printf("Value %d: %d\n", i, product);
     }
}