#include <math.h>
#include <stdio.h>

int main()
{
    int n, l, w, h, i = 0;
    scanf("%d", &n);
    while (i < n) {
        scanf("%d %d %d", &l, &w, &h);
        double paint =  (2.0*(h*l) + 2.0*(h * w))/16.0;
        if(paint < 1)
            printf("1\n");
        else
            printf("%.f\n", ceil(paint));
        i++;
    }
}
