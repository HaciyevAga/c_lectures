#include <stdio.h>
#include <stdlib.h>

int main() 
{
    long long int n, product;
    scanf("%lld", &n);
    if (n < 0 ) n = -n;
    if (n == 0) product = 0;
    else product = 1;
    while (n > 0) {
        if ((n % 10) % 2 == 0 && (n % 10) != 0) product *= (n%10);
        n /= 10;
    } 

    if (product == 1) printf("-1");
    else         printf("%lld", product);




    return 0;
}
