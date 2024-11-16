#include<stdio.h>

int main()
{
    int Arr[4];
    int iCnt = 0;
    int iSum = 0;

    printf("Please Enter Values :\n");

    for(iCnt= 0 ; iCnt < 4; iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }

    //Logic
   
    for(iCnt =0; iCnt < 4; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }
    
    printf("Addition is : %d\n", iSum);

    return 0;
}