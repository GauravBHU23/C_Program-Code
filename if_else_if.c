#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    if(num == 1){
        printf("Your Number is 1\n");

    }
    else if(num ==2)
    {
       printf("Your Number is 2\n");  
    }
    else if(num ==3)
    {
         printf("Your Number is 3\n");
    }
    else if(num ==4)
    {
         printf("Your Number is 4\n");
    }
    else{
         printf("Its not 1,2 or 3 or 4");
    }
    return 0;
}