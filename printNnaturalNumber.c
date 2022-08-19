//C Program to Print first N Natural Numbers
#include<stdio.h>
int main()
{
    int n;
    printf("\nenter the number:");
    scanf("%d",&n);
    int i=1;
    while(i<=n){
        printf("%d",i);
        i=i+1;
        
    }
    return 0; 
    
}
