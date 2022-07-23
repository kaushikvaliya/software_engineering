// A30. Write a program to swap the two numbers without using third variable using pointer 

#include <stdio.h>
int main ()
{
    int a,b,c,*p,*q;
    printf("Enter frist number :");
    scanf("%d",&a);
    printf("Enter second number :");
    scanf("%d",&b);
    p=&a;
    q=&b;

    *p=*p+*q;   
    *q=*p-*q;   
    *p=*p-*q;   

    printf("A=%d b=%d",*p,*q);
    return 0;
}