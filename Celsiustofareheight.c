#include<stdio.h>
int main()
{
    int celsius;
    printf("Enter the value of Celsius:");
    scanf("%d",&celsius);
    float Tempreture = (celsius*9/5)+32;
    printf("Convert into Clesius to Farenheit:%f"  " Farenheit",Tempreture );
    return 0;
}