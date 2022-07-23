// 10. Write a Program to check the given number is Positive, Negative. 
#include<stdio.h>
int main()
{
    int num;

    printf("Enter number check Positive or Negative : ");
    scanf("%d",&num);
    if(num>0)
    {
        printf("Positive number.");
    }
    else
    {
        printf("Negative number.");
    }
    return 0;
}