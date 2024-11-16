#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr = NULL;
    int iLength = 0 ;
    int iCnt = 0 ;

    // Step1 : Accept number from user

    printf("Enter number of element : \n");
    scanf("%d", &iLength);

    // Step2 : Allocate the memory dynamically
    ptr = (int *)malloc(iLength * sizeof(int));

    printf("Enter the elements : \n");
    
    // Step3 : Accept the values and store it into dynamic memory 

    for(iCnt = 0; iCnt <iLength ; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    // Step4 : perform the operations (LOGIC)
    //Function call


    // Step5 : Deallocate the memory 

    free(ptr);

    return 0;
}



/* 

Step1 : Accept number from user
Step2 : Allocate the memory dynamically
Step3 : Accept the values and store it into dynamic memory 
Step4 : perform the operations (LOGIC)
Step5 : Deallocate the memory 

*/