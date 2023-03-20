#include <stdio.h>

int random(int);

int main ()
{
    int number,value;

    printf("Enter a number for fibonacci : ");
    scanf("%d",&number);
    value=random(number);

    printf("Value of the %d. element of the Fibonacci Rule : %d",number,value);

    return 0;
}
int random(int number)
{
    if(number<=1)
    {
        return number;
    }
    
    else
    {
        return random(number-1)+random(number-2);
    }
}