// A3.Write a program to sortthe array of 5 elements
#include <stdio.h>
int main()
{
    int arr1[100];
    int i,j,tmp;
    
    printf("Enter a array elements :\n");
    for(i=0;i<5;i++){
	    printf("Element[%d] : ",i+1);
	    scanf("%d",&arr1[i]);
	}

    for(i=0; i<5; i++)
    {
        for(j=i+1; j<5; j++)
        {
            if(arr1[j] <arr1[i])
            {
                tmp = arr1[i];
                arr1[i] = arr1[j];
                arr1[j] = tmp;
            }
        }
    }
    printf("Sorted elements of array  ascending order:\n");
    for(i=0; i<5; i++)
    {
        printf("%d\n", arr1[i]);
    }
    return 0;
}
