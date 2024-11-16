#include<stdio.h>

int SumEvenDigits(int iNo)
{
    int iDigit = 0;
    int iSum = 0;

    if(iNo < 0) // if input is negative 
    {
        iNo = -iNo;    // Convert it into positive
    }

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        if(iDigit % 2 ==0)
        {
            iSum = iDigit + iSum;
        }
        iNo = iNo /10;
    }
    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number:\n");
    scanf("%d", &iValue);    

    iRet = SumEvenDigits(iValue);

    printf("Summation of even digits is : %d", iRet);
    return 0;
}