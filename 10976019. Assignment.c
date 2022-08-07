#include<stdio.h>
int main()
{
    int i, j, end, count, sum = 0;
    printf("Finding the sum of prime numbers from 1 to _");
    scanf("%d",&end);

    for(i=2; i<=end; i++)
    {
        count = 1;
        for(j=2; j<=i/2; j++)
        {
            if(i%j == 0)
            {
                count = 0;
                break;

            }

        }
        if (count ==1)
        {
            sum+=i;

        }

    }
    printf("the sum of prime numbers from 1 to %d=%d",end,sum);
}