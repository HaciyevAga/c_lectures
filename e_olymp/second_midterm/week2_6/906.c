#include <stdio.h>

int main()
{
    long long n, ans = 1;
    scanf("%lld", &n);
    while (n > 0) {
        ans *= (n%10);
        n /= 10;
    }
    printf("%lld", ans);


    return 0;
}
