#include<stdio.h>
int main()
{
    int n,f,l,m,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d%d%d",&f,&m,&l);
        if((f>m&&m>l)||(l>m&&m>f)){
            printf("Case %d: %d\n",i,m);
        }
        else if((m>l&&l>f)||(f>l&&l>m)){
            printf("Case %d: %d\n",i,l);
        }
         else if((l>f&&f>m)||(m>f&&f>l)){
            printf("Case %d: %d\n",i,f);
        }
    }
    return 0;
}
