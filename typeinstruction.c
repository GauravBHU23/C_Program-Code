#include<stdio.h>
int main()
{
    int a = 4,b,c;
    b=c=a;
    printf("The Value of a is %d\n",a);
    printf("The Value of a is %d\n",b);
    printf("The Value of a is %d\n",c);
    return 0;
    float a = 1.1; // correct way
    float b = a + 8.9;
    printf("The Value Of c is %f\n",b);
    
    float b = a + 8.9;  //error dega
    float a = 1.1;
    printf("The Value Of c is %f\n",b);
}
