#include <stdio.h>

int main()
{
    int n, is_zero = 0;
    long long int p = 1;
    scanf("%d", &n);
    int a[n];
    long long int ans[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
        if (a[i] != 0)
            p *= a[i];
        else
            is_zero++;
    }

    for (int j = 0; j < n; j++){
        if (is_zero == 1 && a[j] == 0)
            ans[j] = p / 1;
        else if (is_zero == 0)
            ans[j] = p / a[j];
        else
            ans[j] = 0;
    }




    for (int k = 0; k < n; k++)
        printf("%lld ", ans[k]);

    return 0;
}
