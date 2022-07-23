// A5.Write a Program of find the element of given position from the array
// linear search
#include<stdio.h>
int main()
{
   int i,a[100],element, pos=0;
 
   for(i=0; i<5; i++)
   {
        printf("Enter array elements [%d] :",i+1);
        scanf("%d", &a[i]);
   }
   
   printf("Enter element to search: ");
   scanf("%d",&element);

   for(i=0; i<5; i++)
   {
        if(a[i]==element)
        {
            printf("%d found at position %d", element, i+1);
        }
   }
   return 0;
}