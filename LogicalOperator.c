#include<stdio.h>
int main(){
    int age;
    int vipPass =0;
    //vipPass = 1;
    printf("Enter Your Age:");
    scanf("%d",&age);
    if((age<=70 && age>=18) || vipPass ==1)
    {
        printf("You are above 18 and below 70,you can drive.\n");

    }
    else{
        printf("You can not drive");
    }
}