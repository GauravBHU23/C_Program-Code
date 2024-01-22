#include<stdio.h>
int main()
{
    char ch;

    printf("Enter your Charecter of Symbol:");
    scanf("%c",&ch);
    if(ch<=122 && ch>=97){
        printf("It is lowercase");
    }
    else{
        printf("It is not Lowercase");
    }

}