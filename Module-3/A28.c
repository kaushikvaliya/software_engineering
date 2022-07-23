// A28. Describe the structure student having rollno and marks of three subjects of five students.
// -Write a program to print all the information and total marks and percentage of each
// student. 
#include<stdio.h>
struct student
{
    int roll;
    float marks[3];
};
int main()
{
    struct student s1[5];
    int i,j;
    for ( i = 0; i < 5; i++)
    {
        
        printf("Enter a roall number :");
        scanf("%d",&s1[i].roll);
        fflush(stdin);
        for( j = 0; j < 3; j++)
        {
            printf("Enter marks :");
            scanf("%d",&s1[i].marks[j]);
        }
    }
    

    return 0;
}