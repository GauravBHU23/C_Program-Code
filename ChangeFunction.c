#include<stdio.h>
void change (int a);

int main(){
    int b = 344;
    printf("The Value of before change is: %d\n",b);
    change(b);
    printf("The Value of after  change is: %d\n",b);
    return 0;

}
void change(int a){
    a =77;
}