#include<stdio.h>
int main(){
int divident,divisior,quotient,remainder;
printf("enter the divident:");
scanf("%d",&divident);
printf("enter the divisior:");
scanf("%d",&divisior);
quotient=divident/divisior;
printf("the quitiont:%d",quotient);
remainder=divident % divisior;
printf("the remainder is :%d",remainder);
return 0;
}




