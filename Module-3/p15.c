// 15.Write a program user enter the 5 subjects mark. You have to make a totaland find the percentage.
// Percentage > 75 you have to print“Distinction”
// Percentage > 60 and percentage <= 75 you have to print “Firstclass”
// Percentage >50 and percentage <= 60 you have to print “Second class” Percentage > 35 and
// percentage <= 50 you have to print “Pass class” Otherwise print“Fail”

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
    if(per>=0 && per<=34)
	{
		printf("fail\n");
	}
	else if(per>=35 && per<50)
	{
		printf("pass\n");
	}
	else if (per>=50 && per<60)
	{
		printf("Grade : D\n");
	}
	else if(per>=60 && per<70)
	{
		printf("Grade : C\n");
	}
	else if(per>=70 && per<80)
	{
		printf("Grade : B\n");
	}
	else if(per>=80&& per<100)
	{
		printf("Grade : A\n");
	}
    return 0;
}