
#include <stdio.h>
#include <math.h>

int reverseNum(int num, int len)
{
    if (len != 1) {
        return (((num % 10) * pow(10, len - 1)) + reverseNum(num / 10, --len));
    }
    else {
        return num;
    }
}

int main()
{
    int num = 0;
    int reverse = 0;
    int len = 0;
    int temp = 0;

    printf("Enter Number: ");
    scanf("%d", &num);

    temp = num;
    while (temp > 0) {
        temp = temp / 10;
        len = len + 1;
    }

    reverse = reverseNum(num, len);
    printf("Reverse number is: %d", reverse);

    return 0;
}
