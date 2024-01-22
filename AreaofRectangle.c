#include<stdio.h>
int main()
{
    int length,breadth;
    printf("Enter the Value of length: ");
    scanf("%d",&length);
    printf("Enter the Value of breadth: ");
    scanf("%d",&breadth);

    int Area = length*breadth;
    printf("Area of Rectangle is: %d",Area);
    return 0;
    
}