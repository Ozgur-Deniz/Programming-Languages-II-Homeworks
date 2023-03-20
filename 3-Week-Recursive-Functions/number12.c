
#include <stdio.h>

int calculateHCF(int num1, int num2)
{
    while (num1 != num2) {
        if (num1 > num2)
            return calculateHCF(num1 - num2, num2);
        else
            return calculateHCF(num1, num2 - num1);
    }
    return num1;
}

int main()
{
    int num1 = 0;
    int num2 = 0;

    printf("Enter Number1: ");
    scanf("%d", &num1);

    printf("Enter Number2: ");
    scanf("%d", &num2);

    printf("The Highest Common Factor is: %d\n", calculateHCF(num1, num2));
}
