#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter the Number of a: ");
    scanf("%d",&a);
     printf("Enter the Number of b: ");
    scanf("%d",&b);
     printf("Enter the Number of c: ");
    scanf("%d",&c);
     printf("Enter the Number of d: ");
    scanf("%d",&d);
    if(a>b && a>c && a>d)
        printf("Biggest Number is: %d\n",a);
        else if(b>c && b>d)
        printf("Biggest Number is: %d\n",b);
        else if(c>d)
        printf("Biggest Number is: %d\n",c);
        else
         printf("Biggest Number is: %d\n",d);
         return 0;
        
    }
       
    
