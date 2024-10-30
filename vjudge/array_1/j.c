#include <stdio.h>

int main()
{
    long long n;
    long double org_num = n, pro = 1.0, sum = 0;
    scanf("%lld", &n);
    while (n > 0) {
        pro *= (n % 10);
        sum += (n % 10);
        n /= 10;
    }
    long double ans = (pro / sum);
    printf("%.3Lf", ans);

    return 0;
}
