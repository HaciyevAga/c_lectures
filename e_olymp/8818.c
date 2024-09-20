#include<stdio.h>
#include<math.h>

int main()
{
    long long n, ans;
    scanf("%lld", &n);

    if(n == 1){
        ans = 5;
    }
    else{
        ans = 9 * 5 * pow(10, n-2);
    }
    printf("%lld", ans);

    return 0;
}
