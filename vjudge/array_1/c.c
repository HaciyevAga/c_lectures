#include <stdio.h>

int main() {
    int n, i, count = 0, sum = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        int num;
        scanf("%d", &num);
        if (num > 0 && num % 6 == 0) {
            count++;
            sum += num;
        }
    }
    printf("%d %d\n", count, sum);

    return 0;
}
