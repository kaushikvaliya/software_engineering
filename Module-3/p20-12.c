//      1
//     4 4
//    9 9 9
//  16 16 16 16
// 25 25 25 25 25

#include <stdio.h>  
int main()  
{  
    int i, j, rows, k = 0,m=1;  
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
            printf ("%d ",i+4);  
        }  
        printf ("\n");  
    }  
    return 0;
}  