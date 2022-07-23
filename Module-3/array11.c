// 11. Write aprogram to enter afiveelements usingArray andprintit onascreen.
#include<stdio.h>
int main()
{
    int i,a[5];

    for(i=0;i<5;i++)
    {
        printf("Enter a number :");
        scanf("%d",&a[i]);
    }

    printf("-----display Array-----\n");
    for(i=0;i<5;i++)
    {
      printf("%d\n",a[i]);
    }
    return 0;
}