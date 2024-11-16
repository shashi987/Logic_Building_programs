#include<stdio.h>

/*
Step1 : Understand problem statement
Step2 : write the algorithm
Step3 : Decide the programming language
Step4 : Write the program
Step5 : Test the program
*/

/*
    Problem Statement
    Write a program which is used to perform ADDITION of two number.    
*/

/*
    Step1: Understand the problem statement
    user is going to enter the data in decimal format.
    If entered data is negative we have to convert it to positive value.
*/

/*
    Step2 : write the algorithm

    START
        Accept first input 
        Accept second input
        If any of the input is negative then convert it into positive
        perform the addtion of tht accepted values
        Display the addition
    STOP
*/

/*
    Step3 : Decide the programming language
    According the problem statement we select the C Programming.
*/

/*
    Step4 : Write the program
*/

///////////////////////////////////////////////////////////////
//
//  Function Name : Addition
//  Description :   It is used to perform addition of 2 float values
//  Input :         Float, Float
//  Output :        Float
//  Author :        Shashikant Laxmikant Tupkar
//  Date :          06/10/2024
//
///////////////////////////////////////////////////////////////

float Addition(float fValue1, float fValue2)
{
    float fAdd = 0.0f;  //Local Variable for result
    
    //Updator
    if(fValue1< 0.0f)
    {
        fValue1= -fValue1;
    } 
     if(fValue2< 0.0f)
    {
        fValue2= -fValue2;
    } 

    fAdd = fValue1 + fValue2;                  //Business Logic
    return fAdd;
}
///////////////////////////////////////////////////////////////
//
// This Application is used to perform addition of 2 numbers
//
///////////////////////////////////////////////////////////////
int main()
{
    float fNo1 = 0.0f, fNo2 = 0.0f, fAns = 0.0f;      //Local variables

    printf("Enter first number : \n");
    scanf("%f", &fNo1);

    printf("Enter first number : \n");
    scanf("%f", &fNo2);

    fAns = Addition(fNo1, fNo2);                       //Function call

    printf("Addition is : %f\n",fAns);

    return 0;
}


/*
    Step5: Test the program

Enter first number :
10.0
Enter first number :
-20.0
Addition is : 30.000000

C:\Users\shash\Desktop\LB>myexe.exe
Enter first number :
-10.0
Enter first number :
-20.0
Addition is : 30.000000

C:\Users\shash\Desktop\LB>myexe.exe
Enter first number :
-10.0
Enter first number :
20.0
Addition is : 30.000000

C:\Users\shash\Desktop\LB>myexe.exe
Enter first number :
10.0
Enter first number :
20.0
Addition is : 30.000000
*/