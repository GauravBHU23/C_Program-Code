#include<stdio.h>
int main()
{
    int i,n;
     printf("Enter The Number :");
        scanf("%d",&n);
    printf("****Multiplication table of 10****\n",n);
    for(int i = 20; i; i--){
        printf("20 X %d = %d\n",i,n*i);
    }
    return 0;
}