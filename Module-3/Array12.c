// 12.Write aprogramto enter aten elements usingArray andfind outthe to countthe total
// number of odd and even numbers
#include<stdio.h>
int main()
{
    int a[10],sum1=0,sum2=0,odd=0,even=0,i;

    for ( i = 0; i < 5; i++)
    {
        printf("Enter number [%d] :",i+1);
        scanf("%d",&a[i]);
        if (a[i]% 2==0)
        {
           even++;
           sum1+=a[i];
        }
        else
        {
            odd++;
            sum2+=a[i];
        }
    }

    printf("Even = %d\n",even);
    printf("Odd = %d\n",odd);

   
    printf("total of even number : %d\n",sum1); 
    printf("total of even number : %d\n",sum2);
    
    return 0;
}
