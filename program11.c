#include<stdio.h>

int main()
{
   int fRadius = 0.0f;
   int fArea = 0.0f;

   printf("Enter the radius of circle \n");
   scanf("%f", &fRadius);

   fArea = 3.14f* fRadius * fRadius;   // 3.14*10.5*10.5

   printf("Area of circle : %f\n", fArea);

   return 0;

}