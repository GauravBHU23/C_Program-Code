#include<stdio.h>
int sum (int a ,int b);
int main()
{
    int c;
    c = sum(2,25);
    printf("The value of c is: %d\n",c);
    return 0;

}
int sum(int a , int b){
    int c;
    c=a+b;
}