#include <stdio.h>

int main()
{
    char a[101];
    char b;
    int n = 0;
    scanf("%s\n%c", a, &b);
    char uppr = b - 32;
    for (int i=0; i < 100; i++) {
        if (a[i] == b || a[i] == uppr) 
            n++;
    }
    printf("%d", n);
    return 0;
}
