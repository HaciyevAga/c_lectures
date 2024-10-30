#include <stdio.h>

int main()
{
    long long int x, y;
    scanf("%lld", &x);
    if(x < -4)
        y = x+ 5;
    else if (x > 7) 
        y = x*x*x + 2*x;
    else
        y = x*x - 3*x - 4;
    printf("%lld", y);


    return 0;
}
