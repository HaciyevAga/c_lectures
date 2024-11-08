#include <stdio.h>

int main()
{
    int n, sum = 0;
    scanf("%d", &n);
    int arr[n];
    int max = -101;
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        if (max < arr[i])
            max = arr[i];
        sum += arr[i];
    }
    for (int j = 0; j < n; j++ )
        if (arr[j] == max)
            sum -= arr[j];
    printf("%d", sum);


    return 0;
}
