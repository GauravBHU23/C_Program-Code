#include<stdio.h>
float Average(int a , int b, int c);
int main()
{
    int a,b,c,d;
    printf("Enter The Value of a:");
    scanf("%d",&a);
      printf("Enter The Value of b:");
    scanf("%d",&b);
      printf("Enter The Value of c:");
    scanf("%d",&c);
     
     
    
    printf("The Value of d is: %f ",Average(a,b,c));
    return 0;

}
float Average(int a , int b , int c){
    float d;
    d = ((float)a+b+c)/3;
    return d;

}