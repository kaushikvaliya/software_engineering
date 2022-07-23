// A20. Write a program to print the Fibonacci series using function.
#include<stdio.h>
void fibonacciSeries(int range)
{
   int a=0, b=1, c;
   while (a<=range)
   {
     printf("%d\n", a);
     c = a+b;
     a = b;
     b = c;
   }
}
int main()
{
   int range;

   printf("Enter range: ");
   scanf("%d", &range);

   printf("The fibonacci series is: \n");

   fibonacciSeries(range);

   return 0;
}