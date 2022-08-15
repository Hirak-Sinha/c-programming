/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    double a,b,temp;
    
    printf("Enter the first number:");
    scanf("%lf",&a);
        printf("Enter the second number:");
    scanf("%lf",&b);
    temp=a;
    a=b;
    b=temp;
        printf("\nafter swapping ,first number= %.2lf\n",a);
        printf("\nafter swapping ,second number= %.2lf",b);
    

    return 0;
}

