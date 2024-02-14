#include<stdio.h>
#include<string.h>
int main()
{
    int i,start,count=0;
    char a[100000];
    while(gets(a))
    {
        for(i=0; a[i]!='\0'; i++)
        {
            if((a[i]>='a' && a[i]<='z') || (a[i]>='A' && a[i]<='Z'))
            {
                start=1;
            }
            else
            {
                if(start)
                {
                    count++;
                    start=0;
                }
            }
        }
        printf("%d\n",count);
        count=0;
    }

    return 0;
}
