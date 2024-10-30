
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
    
    printf("%d ", max +min);

    return 0;
}
