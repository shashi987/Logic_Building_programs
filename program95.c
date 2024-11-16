#include<stdio.h>
#include<stdlib.h>

int Minimun(int Arr[], int iSize)
{
    int iCnt = 0, iMin = 0;
    iMin = Arr[0];

    for(iCnt =0; iCnt<iSize; iCnt++)
    {
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
    }

    return iMin;
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
    
    for(iCnt = 0; iCnt <iLength ; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    iRet = Minimun(ptr, iLength);
    printf("Minimun is : %d\n", iRet);

    free(ptr);

    return 0;
}
