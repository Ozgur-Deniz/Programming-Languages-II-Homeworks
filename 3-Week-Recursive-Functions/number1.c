#include <stdio.h>

int sum (int);

int main ()
{
    int number;

    printf("Enter a number : ");
    scanf("%d",& number);

    printf("Sum of 1 to %d : %d",number,sum(number));

    return 0;
}

int sum (int num)
{
    if(num>0)
    {
        return (num + sum(num-1));
    }
    else
    {
        return 0;
    }
}