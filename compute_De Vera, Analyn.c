#include<stdio.h>

void compute (void);

int main()
{
	int num1=10, num2=15;

	printf("The two numbers are %d and %d", num1,num2);

    compute();

    return 0;
}

void compute (void)
{
	int num1=10, num2=15;
    int sum, difference, product;

	sum= num1 + num2;
    difference= num1 - num2;
	product= num1 * num2;

    printf("\n\nThe sum is %d", sum);
	printf("\nThe difference is %d", difference);
	printf("\nThe product is %d", product);

}


