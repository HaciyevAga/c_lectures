#include <stdio.h>

int main()
{
    int n,t = 0, count = 0;
    scanf("%d", &n);
    int a[n] , ans[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
        if (a[i] == 0) count++; 
        else {
            ans[t] = a[i];
            t++;
        }
    }
    for (int j = t ; j < n; j++) {
        ans[j] = 0;
        t++;
    }

    for (int k = 0; k < t; k++)
        printf("%d ", ans[k]);

    return 0;
}

