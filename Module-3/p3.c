// 3. Write a program to make a square and cube of number.
#include<stdio.h>
int main()
{
    int n,square,cube;
    printf("Enrer A number :");
    scanf("%d",&n);
    square=n*n;
    cube=n*n*n;
    printf("\nSquare of the number %d is %d.",n,square);
    printf("\nCube of the number %d is %d.",n,cube);
    return 0;
}