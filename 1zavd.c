#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <cs50.h>

int main(void)
{
    int count = 0, negativesCount = 0;
    do
    {
        count = get_int("Input count:");
    }
    while((count < 1) || (count > 100));


    int numbers[count];

    for (int i=1; i <= count; i++)
    {
        int number;

        number = get_int("Input number:");

        if(abs(number) > 100)
        {
            printf("Number must be more than -100 and less than 100");
            return 0;
        }

        if (number < 0)
        {
            negativesCount++;
        }

        numbers[i - 1] = number;
    }


    printf("Negatives count: %i\n", negativesCount);


    for (int i=count - 1; i >= 0; i--)
    {
        int number = numbers[i];

        if (number < 0)
        {
            printf("%i, ", number);
            printf("\n");
        }
    }

    if (negativesCount == 0)
    {
        printf("No\n");
    }
}