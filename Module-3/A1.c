// A1.Write a program to entera tenelements using Array and make a summation of the numbers
// and average ofsummation
#include<stdio.h>
int main()
{
    int i ,a[10],sum=0,average=0;

    for ( i = 0; i < 5; i++)
    {
        printf("Enter number [%d] :",i+1);
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    printf("sum of array = %d\n",sum);
    average=sum/5;
    printf("average of array : %d",average);
    
    return 0;
}