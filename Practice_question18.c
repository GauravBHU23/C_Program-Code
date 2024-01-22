#include<stdio.h>
int main()
{
    int i ,n,sum = 0,b =n;
    printf("Enter the Number: ");
    scanf("%d",&n);
    for(i =1; i<11; i++)
    {
        b = n*i;
        sum+=b;
    }
    printf("The Table add (n*1) to (n*10)is: %d",sum);
    return 0;
}