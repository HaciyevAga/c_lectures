#include <stdio.h>

int main()
{
    int n;
    float min;
    scanf("%d", &n);
    float a[n];
    for (int l = 0; l < n; l++)
        scanf("%f", &a[l]);

    min = a[0];
    for (int i = 0; i < n;i++){
        if (min > a[i]) min = a[i];
    }
    
    printf("%.2f ", 2*min);

    return 0;
}
