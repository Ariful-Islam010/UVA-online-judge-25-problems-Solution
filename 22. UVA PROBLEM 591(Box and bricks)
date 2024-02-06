#include<stdio.h>

int main() {
    int n, sum, a[1000], i, j = 1, count;
    double avg;
    while (scanf("%d",&n) == 1) {
        if (n == 0) break;
        sum = 0;
        avg = 0;
        count = 0;
        for (i = 0; i < n; i++) {
            scanf("%d", &a[i]);
            sum = sum + a[i];
        }
        avg = (double)sum / n;
        for (i = 0; i < n; i++) {
            if (a[i] > avg) {
                count = count + (a[i] - avg);
            }
        }
        printf("Set #%d\nThe minimum number of moves is %d.\n\n", j, count);
        j++;
    }
    return 0;
}
