#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long n, sum_digits = 0, product_digits = 1;
    scanf("%lld", &n);
    n = llabs(n);
    while (n > 0) {
        sum_digits += (n%10);
        product_digits *= (n%10);
        n /= 10;
    }
    
    printf("%lld", product_digits - sum_digits);


    return 0;
}
