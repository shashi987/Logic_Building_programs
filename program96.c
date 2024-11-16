#include<stdio.h>
#include<stdlib.h>

void ReverseDisplay(int Arr[], int iSize)
{
    printf("Reverse is : \n");
    int iCnt = 0;
    for(iCnt =iSize-1; iCnt >= 0; iCnt--)
    {
       printf("%d\n", Arr[iCnt]);
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
    
    for(iCnt = 0; iCnt <iLength ; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    ReverseDisplay(ptr, iLength);
    free(ptr);

    return 0;
}
