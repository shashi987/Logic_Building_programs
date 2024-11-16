#include<stdio.h>
#include<stdlib.h>

void AdditionEvenOdd(int Arr[], int iSize)
{
    int iSumEven = 0, iCnt = 0, iSumOdd = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
       if(Arr[iCnt]% 2 == 0)
       {
        iSumEven = iSumEven + Arr[iCnt];
       }
       else{
        iSumOdd = iSumOdd + Arr[iCnt];
       }
    }
    printf("Addition of Even is : %d\n", iSumEven);
    printf("Addition of Odd is : %d\n", iSumOdd);
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
    
    for(iCnt = 0; iCnt <iLength ; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

     AdditionEvenOdd(ptr, iLength);

    free(ptr);

    return 0;
}
