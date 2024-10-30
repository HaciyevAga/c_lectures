#include <stdio.h>

int main()
{
    int n,  count = 0;
    float  sum = 0;
    scanf("%d", &n);
    float a[n], answer;

    for (int j = 0; j < n;j++)
        scanf("%f", &a[j]);

    for (int i = 0; i < n; i++) {
        if (a [i] < 0) {
            sum += a[i];
            count++;
        }
    }

    printf("%d %.2f ", count, sum);

    return 0;
}
