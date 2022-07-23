// g. Write aprogramto printthe numberin reverseorder.
#include <stdio.h>
int main()
{
	int i,rev=0;
	printf("Enter any number:");
	scanf("%d",&i);
	while(i>0){
		rev=(rev*10)+i%10;
		i=i/10;
	}	
	printf("Reverse of entered number is : %d\n",rev);
	return 0;
}
