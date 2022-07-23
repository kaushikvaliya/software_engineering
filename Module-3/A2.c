// A2.Write a program to find outthe max number from given10elements of array.
#include<stdio.h>
int main()
{
    int i ,a[10],max=0;

    for ( i = 0; i < 10; i++)
    {
        printf("Enter number [%d] :",i+1);
        scanf("%d",&a[i]);
    }

    for (i = 0; i < 10; i++)
    {
        if (a[i] > max)
            max = a[i];
    }

    printf("max number is : %d ",max);
    
    return 0;
}