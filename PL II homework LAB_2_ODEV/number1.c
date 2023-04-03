#include <stdio.h>
#include <math.h>

void treeFunction(int, int);
void rootFunction(int);

int main()
{
    treeFunction(2, 1);

    return 0;
}

void treeFunction(int step, int counter)
{
    int i, j, a;
    int index = 0;
    if (counter > step)
    {
        rootFunction(1);
        return;
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

void rootFunction(int root)
{
    if(root>3)
    {
        return;
    }

    else
    {
        for(int i=0; i<4 ; i++)
        {
            printf(" ");
        }
        printf("|\n\n");
        
        rootFunction(root+1);
    }
}