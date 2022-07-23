// A10.Write aprogramto find outthe Maxnumberfrom givenMatrix
#include<stdio.h>
int main()
{
    int i,j,a[2][2],b[2][2],sum[2][2];
    printf("Enter Matrix : 1\n\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("Enter a number :");
            scanf("%d",&a[i][j]);
        }
    }  

    printf("\nEnter Matrix : 2\n\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("Enter a number :");
            scanf("%d",&b[i][j]);
        }
    }

    printf("\nMatrix : 1\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf(" %d ",a[i][j]);  
        }
        printf("\n");
    }

    printf("\n");

    printf("Matrix : 2\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf(" %d ",b[i][j]);  
        }
        printf("\n");
    }
    

    return 0;
}
