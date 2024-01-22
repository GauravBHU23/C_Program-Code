#include<stdio.h>
int natural(int n);
int main()
{
    int n;
    printf("Enter the Natural number is:");
    scanf("%d",&n);

    printf("The sum of first natural number is %d",natural(n));

}
int natural(int n){
    int natural;
    natural = n*(n+1)/2; 
    return natural;
}