#include <stdio.h>
int main()
{
    int radius = 3;
    float pi = 3.14;
    float area = pi * radius * radius;
    printf("Area of Circle: %f\n", area);
    int height = 3;
    float volume = pi * radius * radius * height;
    printf("Volume of cylinder: %f", volume);
    return 0;
}