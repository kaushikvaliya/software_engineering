// 9. Write a Program to show swap of two No's without using third variable.
#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter a frist number : ");
    scanf("%d",&num1);
    printf("Enter seconf number :");
    scanf("%d",&num2);
    num1=num1+num2;   
    num2=num1-num2;   
    num1=num1-num2;
    printf("num1 = %d\nnum2 = %d\n",num1,num2);
    return 0;
}