//     1
//    1 2
//   1 2 3
//  1 2 3 4
// 1 2 3 4 5

#include <stdio.h>  
int main()  
{  
    int i, j, rows, k = 0;  
    printf ("Enter  rows: ");  
    scanf ("%d", &rows);   
      
    for ( i =1; i <= rows; i++)  
    {  
        for ( j = 1; j <= rows - i; j++)  
        {  
            printf ("  ");   
        }  
        for ( k = 1; k <= ( 2 * i - 1); k++)  
        {  
            printf ("%d ",k);  
        }  
        printf ("\n");  
    }  
    return 0;
}  