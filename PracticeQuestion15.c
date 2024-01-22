#include <stdio.h>
int main()
{
        int n,i;
        printf("Enter The Number :");
        scanf("%d",&n);
        printf("Multiplication table of %d:\n",n);
    for (int i = 1; i<=10; i++)
    {
        printf("%d x %d = %d\n",n, i, n * i);
    }
    return 0;
}