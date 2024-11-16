#include<stdio.h>

int SumDigits(int iNo)
{
    int iDigit = 0;
    int iSum = 0;

    if(iNo < 0) // if input is negative Convert it into poaitive
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        iSum = iDigit + iSum;
        iNo = iNo /10;
    }
    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number:\n");
    scanf("%d", &iValue);    

    iRet = SumDigits(iValue);

    printf("Summation od digits is : %d", iRet);
    return 0;
}