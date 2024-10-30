#include <stdio.h>

int main() 
{
    long long n;
    int max = 0;
    scanf("%lld", &n);
    while (n > 0) {
        if (n % 10 > max) 
            max = n % 10;
        n /= 10;
    } 
    printf("%d", max);



    return 0;
}
