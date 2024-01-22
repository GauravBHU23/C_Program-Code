#include<stdio.h>
int main()
{
    int age;
    printf("Enter your Age:");
    scanf("%d",&age) ;
    if(age>=90){
    printf("You are above 90,you cannot drive");
    }
    else{
        printf("You can drive.");
    }
    if (age==50){
        printf("Half Centuary\n");
    }
}