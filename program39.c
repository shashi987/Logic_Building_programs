
#include<stdio.h>

void Display(int iValue)
{
    iCnt = 0;

    for(iCnt= 4; iCnt>=1; iCnt--)
    {
        printf("%d\n", iCnt);
    }

}

int main()
{
    int iFrequency = 0;

    printf("Enter the frequency : ");
    scanf("%d", &iFrequency);

    Display(iFrequency);


}