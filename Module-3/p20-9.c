//     1
//    2 2
//   3 3 3
//  4 4 4 4
// 5 5 5 5 5

#include <stdio.h>  
int main()  
{  
    int i, j, rows, k = 0;  
    printf ("Enter a rows: ");  
    scanf ("%d", &rows);   
      
    for ( i =1; i <= rows; i++)  
    {  
        for ( j = 1; j <= rows - i; j++)  
        {  
            printf ("  ");   
        }  
        for ( k = 1; k <= ( 2 * i - 1); k++)  
        {  
            printf ("%d ",i);  
        }  
        printf ("\n");  
    }  
    return 0;
}  