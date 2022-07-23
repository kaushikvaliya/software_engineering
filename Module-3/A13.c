// A13.write a program to count the total number of word from given string without using string
// function
#include<stdio.h>
int main()
{
    char ch[20];
    int i,count=1;

    printf("Enter a string :");
    gets(ch);

    for(i=0;ch[i]!='\0';i++)
    {
        if (ch[i] == ' ' && ch[i+1]!='\0')
        {
            count++;  
        }
    }
    printf("total word in strintg : %d",count);
    return 0;
}