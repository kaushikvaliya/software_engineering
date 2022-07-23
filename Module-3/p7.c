// 7. Write a program to convert temperature from degree centigrade to Fahrenheit.
#include <stdio.h>
int main()
{
    float f,c;

    printf("Enter the temperature in centigrade :");
    scanf("%f",&c);
    f=(1.8*c)+32;
    printf("Temperature in Fahrenheit is : %.2f\n",f);
    return 0;
}