#include <stdio.h>
#include <math.h>

int divisionFunction(int,int,int);

int main ()
{
    int n1,n2,big,small,division;

    printf("Enter the first number: ");
    scanf("%d",&n1);
    printf("Enter the second number: ");
    scanf("%d",&n2);

    if(n1>n2)
    {
        big=n1;
        small=n2;
    }
    else
    {
        big=n2;
        small=n1;
    }

    division=divisionFunction(big,small,0);

    printf("Division of %d to %d is = %d",big,small,division);
    
    return 0;


}

int divisionFunction(int big, int small, int result)
{

    if(big<small)
    {
        return result;
    }
    else
    {
        big-=small;
        result++;

        return divisionFunction(big,small,result);
    }
}