// A16.Write a program concatenate the two strings without using string function

#include <stdio.h>
int main()
{
   char str1[50], str2[50], i, j;

    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);
 
    for(i=0; str1[i]!='\0'; i++); {
        for(j=0; str2[j]!='\0'; j++, i++)
        {
            str1[i]=str2[j];
        }
    }
   printf("Concated string is : %s \n",str1);
   
   return 0;
}
