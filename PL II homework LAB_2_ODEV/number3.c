#include <stdio.h>
#include <math.h>

int multipyFunction(int, int, int, int);

int main()
{
    int n1, n2, result;

    printf("Enter a nummber: ");
    scanf("%d", &n1);
    printf("Enter a number for multipy %d: ", n1);
    scanf("%d", &n2);

    result = multipyFunction(n1, n2, 0,0);

    printf("%d multipy to %d is = %d ", n1, n2, result, 0);

    return 0;
}

int multipyFunction(int n1, int n2, int sum, int step)
{
    if (step >= n2)
    {
        return sum;
    }
    sum += n1;
    step++;

    return multipyFunction(n1, n2, sum, step);
}