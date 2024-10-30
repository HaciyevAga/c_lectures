#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long n, ans;
    scanf("%lld", &n);
    if (n < 0)
        n = llabs(n);
    int last_digit = n % 10;
    while (n >= 10) 
        n /= 10;
    
    
    ans = last_digit + n ;
    printf("%lld", ans);

    return 0;
}
