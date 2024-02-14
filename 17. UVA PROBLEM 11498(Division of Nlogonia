#include<stdio.h>
int main()
{
    int n,x,y,a,b;
    while(scanf("%d",&n)==1){
            if(n==0)break;
        scanf("%d%d",&x,&y);
        while(n--){
            scanf("%d%d",&a,&b);
            if(a==x||b==y){
                printf("divisa\n");
            }
            else if(a>x&&b>y){
                printf("NE\n");
            }
            else if(a<x&&b>y){
                printf("NO\n");
            }
            else if(a<x&&b<y){
                printf("SO\n");
            }
            else{
                printf("SE\n");
            }
        }
    }
    return 0;
}
