#include<stdio.h>
#include<stdlib.h>

int CountOdd(int Arr[], int iSize)
{
    int iCnt = 0;
    int iCount = 0 ;

    for(iCnt = 0; iCnt < iSize ; iCnt++)
    {
        if(Arr[iCnt] % 2 == 1)
        {
            iCount++;
        }
    }

    return iCount;
}

int main()
{
    int *ptr = NULL;
    int iLength = 0;
    int iCnt = 0;
    int iRet = 0;

    printf("Enter number of element : \n");
    scanf("%d", &iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    printf("Enter the elements : \n");
    
    for(iCnt = 0; iCnt<iLength ; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }
    
    iRet = CountOdd(ptr, iLength);

    printf("Count of odd number is : %d", iRet);

    free(ptr);

    return 0;
}