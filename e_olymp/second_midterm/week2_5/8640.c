#include <stdio.h>

int odd(long long num) {
    int t = 0;
    while (num > 0){
        if ((num % 10) % 2 == 1)
            t++; 
        num /= 10;
    }
    if (t == 4)
        return 1; 
    return 0;
}


int main()
{
    long long ans[1000], t = 0;
    long long a, b;
    scanf("%lld %lld", &a, &b);
    for (long long i = a; i <= b; i++) {
        if (odd(i)) {
            ans[t] = i;
            t++;
        } 
    }
    for (int j = 0; j < t; j++) {
        printf("%lld ", ans[j]);
    }


    return 0;
}
