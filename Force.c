#include<stdio.h>
float force(float mass);
int main()
{
    int m;
    printf("Enter the body of mass:");
    scanf("%d",&m);

    printf("Force of body in the attraction is: %f",force(m));
}

float force(float mass){
    float  m;
    m = mass*9.8;
    return m;

}
