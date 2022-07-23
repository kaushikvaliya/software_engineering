//         1
//       2 1
//     3 2 1
//   4 3 2 1
// 5 4 3 2 1

#include <stdio.h>  
int  main()  
{  
    int i, j, rows, k;  
    printf ("Enter rows: ");  
    scanf ("%d", &rows);  
    printf("\n");  
    for ( i = 1; i <= rows; i++)  
    {  
         
        for (j = rows; j >= 1; j--)  
        {  
            if(j <= i)  
            printf (" %d", j);  
            else  
            printf("  ");  
        }  
        printf ("\n");  
    }  
    return 0;
}  