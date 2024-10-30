#include <math.h>
#include <stdio.h>

int main()
{
    //n cells, m rabbits
    double n, m, ans;
    scanf("%lf %lf", &n, &m);
    
    ans = ceil(n/m);
    printf("%lf", ans);

    return 0;
}
