#include<stdio.h>
int main()
{
    long long int t,sum,tem,n,count;
    scanf("%lld",&t);
    while(t--){
            count=0;
        scanf("%lld",&n);
        while(1){
            tem=n;
            sum=0;
        while(n!=0){
            sum=sum*10+n%10;
            n=n/10;
        }
        if(sum==tem){
            break;
        }
    else{
       n=sum+tem;
       count++;
        }
      }
       printf("%lld %lld\n",count,sum);
    }

    return 0;
}
