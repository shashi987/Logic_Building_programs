// Row = 4
// Column = 3
/*
    *   *   *   

*/

#include<stdio.h>

void Display(int iRow, int iCol)
{
   int i = 0, j = 0;

   for (i = 1 ; i<= iRow; i++)      // Outer(Row)
   {
    for(j = 1; j <= iCol; j++)      //Inner(col)
    {
        printf("*\t");
    }
    printf("\n");
   } 
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows : \n");
    scanf("%d", &iValue1);

    printf("Enter number of column : \n");
    scanf("%d", &iValue2);


    Display(iValue1, iValue2);

    return 0;
}