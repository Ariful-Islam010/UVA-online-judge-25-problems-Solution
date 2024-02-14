#include <stdio.h>
int main()
{
    char a[101][101];
    int b[101][101];
    int n,m,i,j,k=1;
    while (scanf("%d %d",&n,&m)!=EOF)
    {
        getchar();
        if (n==0 && m==0)
        {
            break;
        }
        for (i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
            {
                scanf("%c",&a[i][j]);
                b[i][j]=0;
            }
           getchar();
        }

        for (i=1;i<=n;i++)
        {
            for (j=1;j<=m;j++)
            {
                if (a[i][j]=='*')
                {
                    b[i-1][j-1]++;
                    b[i-1][j]++;
                    b[i-1][j+1]++;
                    b[i][j-1]++;
                    b[i][j+1]++;
                    b[i+1][j-1]++;
                    b[i+1][j]++;
                    b[i+1][j+1]++;
                }
            }
        }
        if (k!=1)
            printf("\n");
        printf("Field #%d:\n",k++);
        for (i=1;i<=n;i++)
        {
            for (j=1;j<=m;j++)
            {
                if (a[i][j]=='*')
                printf("*");
                else printf("%d",b[i][j]);
            }
            printf("\n");
        }


    }


    return 0;
}
