#include<stdio.h>
int main()
{
    float principle;
    float rate;
    float Time;
    printf("Enter the value Of Principle:");
    scanf("%f",&principle);
    printf("Enter the value Of Rate:");
    scanf("%f",&rate);
    printf("Enter the value Of Time:");
    scanf("%f",&Time);
    float Simpleintrest =(principle*rate*Time)/100;
    printf("Your Simple interest is the : %f ",Simpleintrest);
    return 0;
}