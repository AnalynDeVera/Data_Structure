#include<stdio.h>
#include<string.h>

int main()
{
    char character[100];

    printf("Lowercase:  ");
    scanf("%[^\n]", character);

    printf("\nUppercase: ");
    puts(strupr(character));

    return 0;

}
