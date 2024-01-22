#include<stdio.h>
int main()
{
    int Student;
    
    printf("Enter the Student Mark:");
    scanf("%d",&Student);

    if(Student>90 && Student<=100){
        printf("Student will Pass\n");
    }
    
    
    if(Student>80 && Student<=90)
    {
        printf("Student will Medium\n");
    }

    if(Student>70 && Student<=80)
    {
        printf("Student will Average\n");

    }
    
    if(Student>60 && Student<=70)
    {
        printf("Student will Low\n");

    }
    else if(Student<70)
    {
        printf("Student will fail\n");
    }
}