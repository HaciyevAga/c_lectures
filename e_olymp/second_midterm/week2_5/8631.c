#include <stdio.h>
#include <string.h>

int main() 
{
    long long n;
    int max = 0, t = 0, ans = 0;
    int a[100];

    scanf("%lld", &n);
    while (n > 0) {
        a[t] = n % 10;
        if (n % 10 > max) 
            max = n % 10;
        n /= 10;
        t++; 
    }
    while (t--) 
        if (a[t] == max) 
            ans++;
    printf("%d", ans );

    return 0;
}
