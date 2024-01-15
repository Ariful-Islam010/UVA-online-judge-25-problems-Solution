#include<stdio.h>
int main()
{
    int array[100],i,n,sum=0,average;
    printf("How many numbers=");
    scanf("%d",&n);
        for(i=0;i<n;i++)
        {
        scanf("%d\t",&array[i]);
        }
        for(i=0;i<n;i++)
        {
        sum=sum+array[i];
        }
        {
            printf("The sum is: %d\n",sum);
            printf("The average is: %0.2f\n",(float)sum/n);
        }
    }
