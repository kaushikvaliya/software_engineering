// 17.Write a Program of Addition, Subtraction ,Multiplication and Division using Switch case.(Must Be Menu Driven)
#include<stdio.h>
int main()
{
    float num1,num2,result;
    char ch;

    printf("Enter frist number :");
    scanf("%f",&num1);
    printf("Enter second number : ");
    scanf("%f",&num2);
    fflush(stdin);
    printf("Enter Operator (+,-,*,/) :");
    scanf("%c",&ch);
    switch (ch)
    {
    case '+':
        result=num1+num2;
        break;
    case '-':
        result=num1-num2;
        break;
    case '*':
        result=num1*num2;
        break;
    case '/':
        result=num1/num2;
        break;       
    default:
        printf("Not match.\n");
        break;
    }
    printf("Result = %.2f",result);
    return 0;
}