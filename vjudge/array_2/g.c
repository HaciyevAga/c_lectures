#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    
    int max = a[0], min = a[0];

    for (int j = 0; j < n; j++){
        if (min > a[j])
            min = a[j];
        else if (max < a[j] )
            max = a[j];
        else
            continue;;
    }
    
    for (int k = 0; k < n; k++)
        if (a[k] == max) 
            a[k] = min;
    for (int l = 0; l < n; l++) 
        printf("%d ", a[l]);


    return 0;
}
