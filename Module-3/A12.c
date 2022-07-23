// A12.Write a program to find out the length of given string without using string function
#include <stdio.h>
int main()
{
    char string[50];
    int i, length = 0;
 
    printf("Enter a string :");
    gets(string);
    for (i = 0; string[i] != '\0'; i++)
    {
        length++;
    }
    printf("string length of  = %d\n",length);
    return 0;
}
