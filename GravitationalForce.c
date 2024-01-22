#include<stdio.h>
float force(int m1,int m2,int r2,int G);
int main()
{
    int m1,m2,r2,G;
    printf("Enter the value of Gravation:");
    scanf("%d",&G);
    printf("Enter the body of first mass:");
    scanf("%d",&m1);
    printf("Enter the body of Second mass:");
    scanf("%d",&m2);
    printf("Enter the body of radius:");
    scanf("%d",&r2);

    printf("Force of attraction of the Body is %f",force(m1,m2,r2,G));
    return 0;
}
float force(int m1 ,int m2,int r2,int G){
    float force;
    force = (G*m1*m2)/r2*r2;
    return force;
}