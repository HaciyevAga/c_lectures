#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if (a[i] >= 0) 
             a[i] += 2;
        else 
        continue; 
    }
    for (int k = 0; k < n; k++) {
        printf("%d ", a[k]);
    }
        

    return 0;
}
