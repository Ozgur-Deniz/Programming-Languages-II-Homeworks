#include <stdio.h>
#define size 5

void array(int arr[], int index, int a);

int main()
{
    int arr[size], i, index;

    for (i = 0; i < 5; i++)
    {
        printf("Enter a number for %d. element of the array : ", i + 1);
        scanf("%d", &arr[i]);
    }
    index = 4;
    int a = 0;

    array(arr, index, a);

    return 0;
}
void array(int arr[], int index, int a)
{
    if (a > index)
    {
        return;
    }
    else
    {
        printf("%3d", arr[a]);

        array(arr, index, a + 1);
    }
}