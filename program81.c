#include<stdio.h>
#include<stdlib.h>

int Addition(int Arr[], int iSize)
{
    int iSum = 0, iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }

    return iSum;
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

    iRet = Addition(ptr, iLength);
    printf("Addition is : %d\n", iRet);

    free(ptr);

    return 0;
}



/* 

Step1 : Accept number from user
Step2 : Allocate the memory dynamically
Step3 : Accept the values and store it into dynamic memory 
Step4 : perform the operations (LOGIC)
Step5 : Deallocate the memory 

*/