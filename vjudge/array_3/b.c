#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);
    long long int arr[n];
    
    for (long long i = 0; i < n; i++)
        scanf("%lld", &arr[i]);

    long long int min1 = arr[0];
    long long int min2 = arr[0];
    
    for (long long i = 1; i < n; i++) 
        if (min1 > arr[i])
            min1 = arr[i];
        else if (min1 > arr[i] && arr[i] < min1)
            min2 = arr[i];

    printf("%lld %lld", min1, min2); 
    
    return 0;
}

