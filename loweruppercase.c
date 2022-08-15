#include<stdio.h>
int main(){
    char c;
    int islowercasevowel,isuppercasevowel;
    printf("enter the alphabet:");
    scanf("%c",&c);
    islowercasevowel=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
        isuppercasevowel=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
    
    if(islowercasevowel=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')){
        
        printf("%c\nit is lowercasevowel:",c);
    }else{
        printf("%c\nit is uppercasevowel:",c);
    }
    return 0;
}
