#include <stdio.h>

int main()
{
    int a[3], b[3], k, w;
    scanf("%d %d", &k , &w);
    scanf("%d %d %d %d %d %d", &a[0], &b[0], &a[1], &b[1], &a[2], &b[2]);
    int total_weight = a[0]+ a[1] + a[2];
    int total_pupils = b[0] + b[1] + b[2];
    
    if (total_pupils >= k && total_weight >= w) {
        printf("YES");
    }
    else {
        printf("NO");
    }

    return 0;
}
