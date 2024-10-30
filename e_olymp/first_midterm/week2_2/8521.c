#include <stdio.h>

int main()
{
    long long int x, y;
    scanf("%lld", &x);
    if(x >= 10)
        y = x*x*x + 5*x;
    else
        y = x*x - 2*x + 4;
    printf("%lld", y);


    return 0;
}
