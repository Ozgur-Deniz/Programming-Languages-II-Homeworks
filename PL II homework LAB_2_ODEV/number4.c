#include <stdio.h>
#include <math.h>

int powerFunction (int,int,int,int);

int main ()
{
    int n1,power,result;

    printf("Enter a number : ");
    scanf("%d",&n1);
    printf("Enter the power of %d : ",n1);
    scanf("%d",&power);

    result=powerFunction(n1,power,1,0);

    printf("%d. power of %d is : %d",power,n1,result);

    return 0;

}

int powerFunction (int n1,int power,int result,int step)
{
    if(step>=power)
    {
        return result;
    }

    result*=n1;
    step++;

    return powerFunction(n1,power,result,step);
}