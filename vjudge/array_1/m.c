#include <stdio.h>

int main()
{
    int n, max , min, t = 0;
    scanf("%d", &n);
    int a[n], answer;
    for (int l = 0; l < n; l++)
        scanf("%d", &a[l]);

    max = a[0]; min = a[0];
    for (int i = 0; i < n;i++){
        if (max < a[i]) max = a[i];
        if (min > a[i]) min = a[i];
    }
    for (int j = 0; j < n; j++) {
        if (a[j] == max)      a[j] = min;
        else if (a[j] == min) a[j] = max;
    }
    for (int k = 0; k < n; k++) {
        printf("%d ", a[k]);
    }
    


    return 0;
}
