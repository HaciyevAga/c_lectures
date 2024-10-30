#include <stdio.h>

int main()
{
    long long int x, y;
    scanf("%lld", &x);
    if(x < 5)
        y = x*x - 3*x + 4;
    else
        y = x + 7;
    printf("%lld", y);


    return 0;
}
