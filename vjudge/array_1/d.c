#include <stdio.h>

int main()
{
    int n, found = 0, count = 0;
    float sum = 0;
    scanf("%d", &n);
    float a[n], answer;

    for (int j = 0; j < n;j++) scanf("%f", &a[j]);

    for (int i = 0; i < n; i++) {
        if (a [i] > 0) {
            found = 1;
            sum += a[i];
            count++;
        }
    }

    if(found == 1)
        printf("%.2f ", sum/count);
    else 
        printf("Not Found");

    return 0;
}
