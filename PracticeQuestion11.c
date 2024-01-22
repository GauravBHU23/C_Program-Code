#include<stdio.h>
int main()
{
    int i=1,n;
    printf("Enter the natural number:");
    scanf("%d",&i);

    do{
    printf(" %d\n",i);
    i++;
    
    }
    while(i<=10);
    return 0;
}