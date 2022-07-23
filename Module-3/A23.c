// A23. Write a Program of Factorial using Recursive Function
#include<stdio.h>
int multiplyNumbers(int n) 
{
    if (n>=1)
    {
        return n*multiplyNumbers(n-1);
    }
}
int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    printf("Factorial of = %d", multiplyNumbers(n));
    return 0;
}


