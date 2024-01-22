#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the Number of a:");
    scanf("%d",&a);
   // printf("Enter the Number of b:");
   // scanf("%d",&b);
    if(a%2 == 0){
        printf("%d is a Even Number",a );
    }
    else{
        printf("%d is a Odd Number",a);
    }

}