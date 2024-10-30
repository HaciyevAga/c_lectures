#include <stdio.h>

int main() {
    int n, ans = 1;
    scanf("%d", &n);
    while (n > 0) {
        if (n % 10 != 0) {
            ans *= (n%10);
        }
        n /= 10;
    } 
    printf("%d", ans);
    return 0;
}
