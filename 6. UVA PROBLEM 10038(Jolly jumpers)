#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,t,temp,count=0;
    while(scanf("%d",&t)==1)
    {
        int a[t],b[t-1];
        for(i=0; i<t; i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0,j=1; i<t,j<t; i++,j++)
        {
            if(a[i]>a[j])
                b[i]=a[i]-a[j];
            else
                b[i]=a[j]-a[i];
        }
        for(i=0; i<t-1; i++)
        {
            for(j=i+1; j<t-1; j++)
            {
                if(b[i]>b[j])
                {
                    temp=b[i];
                    b[i]=b[j];
                    b[j]=temp;
                }
            }
        }
        for(i=0; i<t-1; i++)
        {
            if(b[i] != (i+1))
                count++;
        }
        if(count==0)
            printf("Jolly\n");
        else
        {
            printf("Not jolly\n");
            count=0;
        }
    }
    return 0;
}
