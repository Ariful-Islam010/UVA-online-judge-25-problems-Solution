#include <stdio.h>

int main()
{
    long long int a, b;
    int count, rej;

    while (scanf("%lld %lld", &a, &b) != EOF) {
        if (a == 0 && b == 0)
            break;

        count = 0;
        rej = 0;

        while (a || b) {
            rej = ((a % 10) + (b % 10) + rej) / 10;
            a /= 10;
            b /= 10;
            count += rej;
        }

        if (count == 0) {
            printf("No carry operation.\n");
        }
        else if(count==1) {
            printf("1 carry operation.\n");
        }
        else{
            printf("%d carry operations.\n",count);
        }
    }

    return 0;
}
