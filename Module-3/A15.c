// A15.Write a program to make string reverse and check the given string is palindrome or not
// without using string function.
#include <stdio.h>
#include <string.h>
int main()
{
	char ch[20];
	int i,n;
	
	printf("Enter a string :");
	gets(ch);
	n=strlen(ch);
	for(i=n;i>=0;i--)
    {
        printf("%c",ch[i]);
    }
	printf("\n");
	return 0;
}