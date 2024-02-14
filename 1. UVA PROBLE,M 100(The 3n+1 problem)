#include<stdio.h>
int func(int a,int b)
{
    int x,temp,max=0,count=1;
    if(a>b)
    {
        temp=a;
        a=b;
        b=temp;
    }
    while(a<=b)
    {
        x=a;
        while(x!=1)
        {
            if(x%2==0)
                x=x/2;
            else
                x=x*3+1;
            count++;
            if(x==1)
                break;
        }
        if(count>max)
            max=count;
        count=1;
        a++;
    }
    return max;
}
int main()
{
    int i,j,result;
    while(scanf("%d%d",&i,&j)==2)
    {
        result=func(i,j);
        printf("%d %d %d\n",i,j,result);
    }
    return 0;
}
