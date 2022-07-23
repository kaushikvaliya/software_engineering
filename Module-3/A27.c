// A27. Write a program of structure for five employee that provides the following information
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
    int i;

    for(i=1;i<=5;i++)
    {
        printf("Enter [%d] employe details.\n\n",i);
        printf("Enter roll number :");
        scanf("%d",&s1.no);

        fflush(stdin);
        
        printf("Enter name :");
        gets(s1.ch);

        printf("Enter address :");
        gets(s1.ch1);
    }


    for(i=1;i<=5;i++)
    {
        printf("Employe [%d] details.\n\n",i);
        printf("number = %d\n",s1.no);
        printf("name = %s\n",s1.ch);
        printf("address = %s\n",s1.ch1);
    }

    return 0;

}