#include<stdio.h>
#include<math.h>

int main()
{
    long long n, ans, power;
    scanf("%lld", &n);
    ans = 9 * pow(10, n-1);

    printf("%lld", ans);

    return 0;
}
