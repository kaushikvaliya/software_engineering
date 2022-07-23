// A24. Write a Program of Print a number and check the number is palindrome or not using
// recursive Function

#include <stdio.h>
 
int isPalindrome(int num)
{
    int n = num;
    int rev = 0;
 
    while (n)
    {
        int r = n % 10;
        rev = rev * 10 + r;
        n = n / 10;
    }
 
    return (num == rev);
}
 
int main()
{
    int n;
    printf("Entr a number :");
    scanf("%d",&n);
 
    if (isPalindrome(n)) {
        printf("Palindrome");
    }
    else {
        printf("Not Palindrome");
    }
 
    return 0;
}
