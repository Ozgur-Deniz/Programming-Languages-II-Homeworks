#include <stdio.h>


int biggest(int arr[], int i, int lenght,int bigNumber);

int main ()
{
    int i,lenght,bigNumber;

    printf("Enter the size of the array : ");
    scanf("%d",&lenght);

    int arr[lenght];

    for(i=0 ; i<lenght ; i++)
    {
        printf("Enter the value of %d. element of the array : ",i+1);
        scanf("%d",&arr[i]);
    }
    bigNumber=arr[0];

    printf("The biggest element of the array is : %d",biggest(arr,1,lenght,bigNumber));

    return 0;
}

int biggest(int arr[], int i, int lenght,int bigNumber)
{
    
    if(i<lenght)
    {
        if(i==1)
        {
            return biggest(arr,i+1,lenght,bigNumber);
        }
        else
        {
            if(arr[i]>bigNumber)
            {
                bigNumber=arr[i];
                return biggest(arr,i+1,lenght,bigNumber);

            }
        }
    }

    return bigNumber;
}