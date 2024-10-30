#include <stdio.h>

int main()
{
    int n, t = -1, found = 0;
    scanf("%d", &n);
    float a[n], answer;

    for (int j = 0; j < n;j++)
        scanf("%f", &a[j]);

    for (int i = 0; i < n; i++) {
        if (a [i] <= 2.5) {
            found = 1;
            t = i;
            break;
        }
    }

    if(found == 1)
        printf("%d %.2f ", t+1 , a[t]);
    else 
        printf("Not Found");

    return 0;
}
