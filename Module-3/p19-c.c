// c. write aprogramto printthe 100to 81using do....while loop
#include<stdio.h>
int main()
{
    int number;
	number=100;
	printf("Numbers from 1 to 10: \n");
	while(number>=81)
	{
		printf("%d ",number);
		number--;
	}
	return 0;
}