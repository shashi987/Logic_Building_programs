#include<stdio.h>
#include<stdlib.h>

void _________(int Arr[], int iSize)
{
    //logic
}
int main()
{
    int iLength = 0;
    int *ptr = NULL;
    int iCnt = 0;

    printf("Enter the number of elements : \n");
    scanf("%d", &iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    printf("Enter the elements : \n");

    for(iCnt= 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    _________(ptr, iLength);

    free(ptr);


    return 0;
}