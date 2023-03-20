#include <stdio.h>

int sum(int);

int main()
{
    int number;

    printf("Enter a number : ");
    scanf("%d", &number);

    printf("Sum of digit of %d : %d", number, sum(number));

    return 0;
}

int sum(int number)
{
    int value;

    if (number > 0)
    {
        value = number % 10;

        return (value + sum(number / 10));
    }
    else
    {
        return number;
    }
}