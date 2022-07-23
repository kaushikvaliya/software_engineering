// A25. Write a Program of Make a string reverse using recursive Function.
# include <stdio.h>
void reverse(char *str)
{
    if (*str)
    {
        reverse(str+1);
        printf("%c", *str);
    }
}

int main()
{
    char a[100];
    printf("Enter a number :");
    gets(a);
    
    reverse(a);
    return 0;
}
