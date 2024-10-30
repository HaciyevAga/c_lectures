#include <stdio.h>

int main()
{
    long long int a, b, ans = 0;
    scanf("%lld %lld", &a, &b);
    for (int i = a; i <= b; i++) {
        if ( i % 2 == 1)
            ans += i;
        else
            continue;;
    }

    printf("%lld", ans);

    return 0;
}
