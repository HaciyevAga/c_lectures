#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, ans = 1;
    
    scanf("%d", &n);
    if(n < 0) n = -n;
    while (n > 0) {
        ans *= (n%10);
        n /= 100;
    }
    printf("%d", ans);
    
    return 0;
}
