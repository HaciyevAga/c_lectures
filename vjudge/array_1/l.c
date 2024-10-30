#include <stdio.h>

int main()
{
    int n, t = -1, found = 0;
    scanf("%d", &n);
    float a[n], answer = 0;

    for (int j = 0; j < n;j++){
        scanf("%f", &a[j]);
        answer += a[j];
    }
    printf("%.1f", answer);


    return 0;
}
