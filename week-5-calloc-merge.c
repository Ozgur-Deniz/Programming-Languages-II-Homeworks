#include <stdio.h>
#include <stdlib.h>

int *mergeSortingFunction (int [],int,int [],int);


int main ()
{
    int array1 [5]={2,4,6,8,10};
    int array2 [5]={1,7,9,11,13};
    int *ptr;

    ptr=mergeSortingFunction(array1,5,array2,5);

    printf("SORTED ARRAY: \n\n");

    for(int i=0 ; i<10 ; i++)
    {
        printf("%3d",ptr[i]);
    }

    return 0;
}

int *mergeSortingFunction (int arr1 [],int size1,int arr2 [],int size2)
{
    int *result=(int *)calloc(size1+size2,sizeof(int));
    int i=0,j=0,a;

    for(a=0 ; a<size1+size2; a++)
    {
        if(arr1[i]<arr2[j])
        {
            result[a]=arr1[i];
            i++;
        }
        else
        {
            result[a]=arr2[j];
            j++;
        }
    }

    return result;
}