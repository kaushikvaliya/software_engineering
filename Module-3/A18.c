// A18. Write a program to find out the Square and cube of given number using function.

#include<stdio.h>
int main()
{
    int s ,c ,num;

    printf("Enter a number :");
    scanf("%d",&num);

    s=num*num;
    c=num*num*num;

    printf("Square is = %d\n",s);
    printf("Cube is = %d",c);

    return 0;
}
