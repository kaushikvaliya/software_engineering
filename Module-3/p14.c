// 14. Write a program to find the Max number from the given three number using Ternary Operator
#include<stdio.h>
int  main()
{
   int a,b,larg;  

   printf("Enter two number : ");
   scanf("%d %d",&a,&b);

   larg = a>b?a:b;      

   printf("largest number is : %d",larg);  
   return 0;
}