#include<stdio.h>
int main()
{
    int Physics,Chemistry,maths;
    int total;
    printf("Enter the Physics marks:");
    scanf("%d",&Physics);
    printf("Enter the Chemistry marks:");
    scanf("%d",&Chemistry);
    printf("Enter the maths marks:");
    scanf("%d",&maths);
     total =(Physics+maths+Chemistry)/3;
    
        if((total<40) || Physics<33 || maths<33 || Chemistry<33){
            printf("Your total percentage is %d and you are Fail.\n",total);


        }
        else{
            printf("Your total percentage is %d and you are Pass.\n",total);
        }
    }
