#include<stdio.h>

int rectPerimeter (int length, int width) // function
{
    int perimeter;

    perimeter= 2*(length + width);

    return perimeter;
}

int main()
{
    int lngth, wdth, prmtr;

    printf("Enter length: ");
    scanf("%d", &lngth);
    printf("Enter width: ");
    scanf("%d", &wdth);

    prmtr= rectPerimeter (lngth, wdth);

    printf("\nThe Rectangle's Perimeter is %d", prmtr);

    return 0;

}
