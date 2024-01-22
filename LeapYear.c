#include<stdio.h>
int main()
{
    int year;
    printf("Enter the Value of Year:");
    scanf("%d",&year);
    if(year%4 ==0 && year%100==0 && year%400 ==0){
        printf("Number is Leap Year");

    }
    else{
       printf("Number is not Leap Year");
    }
}