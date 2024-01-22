#include <stdio.h>
float Farenheit(int tempreture);
int main()
{
    int tempreture;
    printf("Enter the Given Tempreture:");
    scanf("%d", &tempreture);
    printf("The Celsius convert into farenheit %f", Farenheit(tempreture));
}
float Farenheit(int tempreture)
{
    float Farenheit;
    Farenheit = (tempreture * 9 / 5) + 32;
    return Farenheit;
}