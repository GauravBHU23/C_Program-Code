#include <stdio.h>
int main()
{
    int n;
    
   printf("Enter The Value of n:");
   scanf("%d", &n);
    for ( int i = n; i; i--)
    {
        printf("The Value of i is %d\n", i);
    }
    return 0;
}