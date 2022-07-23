// 8. Write a program to calculate sum of 5 subjects & find the percentage. Subject marks entered by user.
#include<stdio.h>
int main()
{
    int s1,s2,s3,s4,s5,sum;
    float per;

    
    printf("Enter mark subject 1 :");
    scanf("%d",&s1);
    printf("Enter mark subject 2 :");
    scanf("%d",&s2);
    printf("Enter mark subject 3 :");
    scanf("%d",&s3);
    printf("Enter mark subject 4 :");
    scanf("%d",&s4);
    printf("Enter mark subject 5 :");
    scanf("%d",&s5);
    sum=s1+s2+s3+s4+s5;
    per=(sum*100)/500;
    printf("sum all subject mark : %d\n",sum);
    printf("percentage is : %.2f\n",per);
    return 0;
}