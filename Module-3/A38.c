// A38. Write a program to swap the values of 2 variable using pointer, function and structure.
#include <stdio.h>
struct kaushik
{
    int num1,num2;
};
void swap(int *x,int *y)
{
    int t;
    t   = *x;
    *x   = *y;
    *y   =  t;
}
int main()
{
    struct kaushik s1;

    printf("Enter value of num1: ");
    scanf("%d",&s1.num1);
    printf("Enter value of num2: ");
    scanf("%d",&s1.num2);

    swap(&s1.num1,&s1.num2);

    //after swapping
    printf("After  Swapping number.\n");
    printf("num1 = %d \nnum2 = %d\n",s1.num1,s1.num2);

    return 0;
}