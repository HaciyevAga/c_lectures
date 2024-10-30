#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ans[1000], t = 0;
    char n, a[6], b[6];
    scanf("%s %s", a, b);
    int an = atoi(a);
    int bn = atoi(b);

    for (int i = an; i <= bn; i++) {
        sprintf(a, "%d", i);
        
        if (a[0] != a[1] && a[0] != a[2] && a[0] != a[3] && a[1] != a[2] && a[1] != a[3] && a[2] != a[3] ){
            ans[t] = i;
            t++;
        }
        
    }
    for (int j = 0; j < t; j++)
        printf("%d ", ans[j]);    


    return 0;
}
