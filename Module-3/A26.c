// A26. Write a program of structure employee that provides the following information
// -print and display empno,empname,address and age

#include<stdio.h>
struct employe 
{
    int no;
    char ch[20],ch1[50];

};
int main()
{
    struct employe s1;

    printf("Enter roll number :");
    scanf("%d",&s1.no);

    fflush(stdin);
    
    printf("Enter name :");
    gets(s1.ch);

    printf("Enter address :");
    gets(s1.ch1);


    printf("number = %d\n",s1.no);
    printf("name = %s\n",s1.ch);
    printf("address = %s\n",s1.ch1);

    return 0;

}