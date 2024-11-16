#include<stdio.h>
#include<stdlib.h>

void EvenDisplay(int Arr[], int iSize)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize ; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            printf("%d", Arr[iCnt]);
        }
    }
}

int main()
{
    int *ptr = NULL;
    int iLength = 0;
    int iCnt = 0;

    printf("Enter number of element : \n");
    scanf("%d", &iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    printf("Enter the elements : \n");
    
    for(iCnt = 0; iCnt<iLength ; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }
    
    EvenDisplay(ptr, iLength);

    free(ptr);

    return 0;
}