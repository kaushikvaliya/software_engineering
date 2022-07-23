// * * * * *  * * * * *
// * * * *      * * * *
// * * *          * * *
// * *              * *
// *                  *

#include<stdio.h>
int main()
{
	int i,j,n;
	int space=0;
	printf("Enter row :" );
    scanf("%d",&n);
	for(i=n;i>0;i--)
	{
		for(j=0;j< i;j++)
		{
			printf("* ");
		}
		for(j=0;j< space;j++)
		{
			printf("  ");
		}
		for(j=0;j< i;j++)
		{
			printf(" *");
		}
		
		printf("\n");
		space+=2;
	}
    return 0;
}
