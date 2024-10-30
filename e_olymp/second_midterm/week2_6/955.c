#include <math.h>
#include <stdio.h>

int main()
{
    long long n, sum_digits = 0;
    scanf("%lld", &n);
    while (n > 0) {
        sum_digits += (n%10);
        n /= 10;
    }
    long long ans = pow(sum_digits, 2);
    printf("%lld", ans);


    return 0;
}
