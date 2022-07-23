// 5. Write a program to find the Area of Triangle 
#include <stdio.h>
int main()
{
	float h,b,area;
	
	printf("Enter Hight :");
	scanf("%f",&h);
	printf("Enter base  :");
	scanf("%f",&b);
	area=h*b*0.5;
	printf("Triangle erea = %.2f\n",area);
	return 0;
}