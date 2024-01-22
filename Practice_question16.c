#include<stdio.h>
int main()
{
    int i,sum = 0,n;
    printf("Enter The Number:");
    scanf("%d",&n);
    for(i = 0;i<=n; i++){
        sum +=i;
    }
    printf("The Value of sum(1-n) is: %d",sum);
    return 0;
}