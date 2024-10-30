#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long n, ans = 0;
    scanf("%lld", &n);
    if (n < 0)
        n = abs(n);

    while (n > 0) {
        ans += n % 10;
        n /= 10;
    }
    printf("%lld", ans);

    return 0;
}
