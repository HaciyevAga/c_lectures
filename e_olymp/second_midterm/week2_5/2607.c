#include <stdio.h>

int main()
{
    long long int n, odd_sum = 0, even_sum;
    scanf("%lld", &n);
    while (n > 0) {
        odd_sum = odd_sum + (n % 10);
        n /= 10;
        even_sum = even_sum + (n % 10);
        n /= 10;
    }
    long long int ans = odd_sum * even_sum; 
    printf("%lld", ans);

}
