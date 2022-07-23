// A17. Write a program to perform addition, subtraction, multiplication and division of two
// numbers using Function
#include<stdio.h>
void aabb(int a , int b);
int main()
{
    int num1,num2;
    printf("Enter a frist number :");
    scanf("%d",&num1);

    printf("Enter a second number :");
    scanf("%d",&num2);

    aabb(num1,num2);

}
void aabb(int a , int b)
{
    printf("addition = %d\n",a+b);
    printf("subtraction = %d\n",a-b);
    printf("multiplication = %d\n",a*b);
    printf("division = %d\n",a/b);
}

