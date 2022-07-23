// A19.Write a program to find out the factorial of given number using function.

#include<stdio.h>
int fact(int a);
int main()
{
    int n;
    printf("Enter a number to calculate it's factorial :");
    scanf("%d",&n);
    printf("%d",fact(n));
    return 0;
}
int fact(int a)
{
    int i,f=1;
    for (i=1; i<=a; i++)
    {
        f*=i;
    }
    return f;
 
}