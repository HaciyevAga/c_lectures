
#include <stdio.h>

int main() 
{
    long long n, ans = 0, t = 1;
    int is_odd = 0;
    scanf("%lld", &n);

    while (n > 0) {
        int digit = n % 10;
        if (digit % 2 != 0) {
            ans += digit * t;
            t *= 10;
            is_odd = 1;
        }
        n /= 10;
    } 

    if (!is_odd)
        printf("0");
    else
        printf("%lld", ans);

    return 0;
}
