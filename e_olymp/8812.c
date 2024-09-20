#include<stdio.h>

int main()
{
    long long a, b, peri, area;
    scanf("%lld %lld", &a, &b);
    peri = 2*(a + b);
    area = a*b;
    printf("%lld %lld", peri, area );
}
