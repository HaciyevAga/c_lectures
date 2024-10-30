#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n; float max;
    scanf("%d", &n);
    float a[n];
    float b;
    for (int j = 0; j < n; j++){
        scanf("%f", &b);
        if(b < 0) b = -b;
        a[j] = b;
    }
    max = a[0];

    for (int i = 0; i < n;i++){
        if (max < a[i]) max = a[i];
    }
    
    printf("%.2f", max);

    return 0;
}
