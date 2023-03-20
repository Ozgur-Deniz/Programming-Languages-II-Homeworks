#include <stdio.h>
#include <math.h>

int sumDigit(int);
int countDigit(int,int);

int main ()
{
    int number;

    printf("Enter a number : ");
    scanf("%d",&number);
    int count=0;

    for(int a=number ; a>0 ; a/=10)
    {
        count++;
    }

    printf("Sum of the digits of number: %d\n",sumDigit(number));
    printf("Count of digits of the numbers : %d",countDigit(number,0));
    
    return 0; 
}
int sumDigit(int number)
{
    int sum;

    if(number<=0)
    {
        return 0;
    }
    else
    {
        sum=number % 10;
        return sum+sumDigit(number/=10);
    }

}
int countDigit(int number,int count)
{

    if(number<=0)
    {
        return count;
    }
    else
    {
        return countDigit(number/=10,count+1);
    }
}

