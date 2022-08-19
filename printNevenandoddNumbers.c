//C Program to Print first N even and odd  Numbers
#include<stdio.h>
int main()
{
    int n;
    printf("\nenter the number:");
    scanf("%d",&n);
    int i=1;
    while(i<=n){
        if(i%2==0)
            printf("\neven %d",i);
        
        i=i+1;
        if(i%2!=0)
            printf("\nodd %d",i);
        
    }
    return 0; 
    
}
