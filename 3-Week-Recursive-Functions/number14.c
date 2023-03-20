
#include <stdio.h>

int calculateProduct(int num1, int num2)
{
    if (num1 < num2) {
        return calculateProduct(num2, num1);
    }
    else if (num2 != 0) {
        return (num1 + calculateProduct(num1, num2 - 1));
    }
    else {
        return 0;
    }
}

int main()
{
    int num1 = 0;
    int num2 = 0;
    int product = 0;

    printf("Enter Num1: ");
    scanf("%d", &num1);

    printf("Enter Num2: ");
    scanf("%d", &num2);

    product = calculateProduct(num1, num2);
    printf("Product is: %d", product);

    return 0;
}
