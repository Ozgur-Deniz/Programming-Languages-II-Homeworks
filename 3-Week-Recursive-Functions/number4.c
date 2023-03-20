#include <stdio.h>

int largest(int,int,int);

int main ()
{
    int number1,number2,divisor,small,big;

    printf("Enter two number : ");
    scanf("%d%d",&number1,&number2);
    divisor=2;
    if(number1>number2)
    {
        small=number2;
        big=number1;
    }
    else
    {
        big=number2;
        small=number1;
    }

    printf("The largest common divisor of %d and %d is : %d",number1,number2,largest(small,big,small));

    return 0;
}

int largest (int small, int big, int i)
{
    int divisor;

    if(i<=small)
    {
        if(small % i == 0 && big % i == 0)
        {
            divisor=i;

            return divisor;
        }
        else
        {
            return largest(small,big,i-1);
        }   
    }
    else
    {
        return divisor;
    }
    
}