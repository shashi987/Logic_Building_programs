#include<stdio.h>

int CountDigit(int iNo)
{
    int iCnt = 0;
    
    if(iNo < 0 )   //Updator
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        iCnt++;
        iNo = iNo/10;

    }
    return iCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter number :\n");
    scanf("%d", &iValue);

    iRet = CountDigit(iValue);
    printf("Digit in number are : %d", iRet);

    return 0;
}