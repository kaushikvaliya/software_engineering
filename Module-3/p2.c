// 2. Write a program to make addition, Subtraction, Multiplication and Division of Two Numbers. 
#include <stdio.h>
int main()
{
    int add,sub,mul,num1,num2;
    float div;

    printf("Enter frist number : ");
    scanf("%d",&num1);

    printf("Enter second number :");
    scanf("%d",&num2);

    add=num1+num2;
    sub=num1-num2;
    mul=num1*num2;
    div=num1/num2;

    printf("addition = %d\n",add);
    printf("Subtraction = %d\n",sub);
    printf("Multiplication = %d\n",mul);
    printf("Division = %.2f\n",div);
    return 0;
}