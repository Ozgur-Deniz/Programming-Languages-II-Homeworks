#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i, point, count, a, b, result;
    srand(time(NULL));

    for (count = 1; result != 7; count++)
    {
        a = rand() % 6 + 1;
        b = rand() % 6 + 1;

        result = a + b;

        if (count == 1)
        {
            if (result == 7 || result == 11)
            {
                printf("Congratulations! Your score is %d. You won the game int the first try.", result);
                return 0;
            }
            else if (result == 2 || result == 3 || result == 12)
            {
                printf("Unfortunately! Your score is %d. You didn't win the game in the first try.", result);
                return 0;
            }
            else if (result == 4 || result == 5 || result == 6 || result == 8 || result == 9 || result == 10)
            {
                point = result;
                continue;
                
            } 
        }
        else if (count != 1)
        {
            if (result == point)
            {
                printf("Congratulations! Your score is %d. Your point is %d. You won the game in the %d. try.", result,point, count);
                return 0;
            }
            point = result;
        }
    }

    printf("Unfortunately! You didn't win the game in the %d.try because of your last score is 7", count);

    return 0;
}