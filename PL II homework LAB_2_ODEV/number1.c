#include <stdio.h>
#include <math.h>

int treeFunction(int, int);

int main()
{
    int step;

    printf("Enter step number : ");
    scanf("%d", &step);

    treeFunction(step, 1);

    return 0;
}

int treeFunction(int step, int counter)
{
    int i, j, a;
    int index = 0;
    if (counter > step)
    {
        return 0;
    }

    else
    {
        for (j = 1; j <= (4 * counter) + 1; j += 2)
        {
            index++;
            if (j == 0)
            {
                for (i = 0; i < ((4 * step) / 2) + 1; i++)
                {
                    printf(" ");
                }
            }

            else
            {
                for (i = 0; i < ((4 * step) / 2) - index + 1; i++)
                {
                    printf(" ");
                }
            }

            for (a = 0; a < j; a++)
            {
                printf("*");
            }

            printf("\n");
        }

        return treeFunction(step, counter + 1);
    }
}