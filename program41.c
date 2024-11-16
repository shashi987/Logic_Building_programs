#include<stdio.h>

void Display()
{
    //logic 
    int iCnt = 0;
    for(iCnt = 1; iCnt<=10; iCnt++)
    {
        printf("%d\n", iCnt);
    }
}

int main()
{
    Display();

    return 0;
}