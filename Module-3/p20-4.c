//          *
//        * *
//      * * *
//    * * * *
//  * * * * *
#include<stdio.h>
int main()
{    
	int i,j,n,k;
	printf("Enter rows : ");
	scanf("%d",&n);
		for(i=n;i>=1;i--){
		    for(j=i;j>=2;j--){
                        printf("  ");
		    }
		    for(k=1;k<=n-i+1;k++){
		        printf(" *");
		    }
		printf("\n");
	    }
        return 0;
} 