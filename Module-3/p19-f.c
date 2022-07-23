// f. Write aprogramyouhave to printthe table of givennumber.
#include <stdio.h>
#include <stdio.h>
int main()
{
	int n,i;
	printf("Enter eny integer:");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		printf("%d*%d=%d\n",n,i,n*i);
	}	
	return 0;
}