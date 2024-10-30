#include <stdio.h>

int main()
{
    
    long long n;
    scanf("%lld", &n);
    int ans = 0;
    while(n > 0){
        if ((n%10) % 2 == 1)
            ans++; 
        n /= 10;
    }
    printf("%d", ans);

    return 0;
}
