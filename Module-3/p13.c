// 13.Write a program to find the Max number from the given three number using Nested If 
#include <stdio.h>
int main()
{
	int num1,num2,num3;
	printf("Enter num1 :");
	scanf("%d",&num1);
	printf("Enter num2 :");
	scanf("%d",&num2);
	printf("Enter num3 :");
	scanf("%d",&num3);
	
	if(num1<num2 && num1<num3)
	{
		printf("First is Max number\n");
	}
	else if(num2<num1 && num2<num3)
	{
		printf("Second is Max number\n");
	}
	else if(num3<num1 && num3<num2)
	{
		printf("Third is Max number\n");
	}
	return 0;
}	