// 4. Write a program to find the Area of Circle 
#include<stdio.h>
int main()
{
    float radius,pi=3.14 ,area;
	
	printf("Enter radius of circle : ");
	scanf("%f",&radius);
	area=radius*radius*pi;
	printf("area of circle = %.2f\n",area);
    return 0;
}