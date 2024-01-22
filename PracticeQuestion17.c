#include<stdio.h>
int main()
{
    int i= 1,sum =0,n;
    printf("Enter The Number:");
    scanf("%d",&n);
    while(i<=n){
        sum +=i;
        i++;
    }
    printf("the Value Of sum(1-n) is %d",sum);
    return 0;
}