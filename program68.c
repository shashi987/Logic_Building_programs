#include<stdio.h>
void Display(int *ptr)
{
    int iCnt = 0;
    printf("Values of the array are : \n");
 
    for(iCnt = 0; iCnt<4; iCnt++)
    {
        printf("%d\n", *ptr);
        ptr++;
    }
}

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

    Display(Arr);   

    return 0;
}