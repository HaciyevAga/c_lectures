#include <stdio.h>

int main()
{
    char n[5];
    int ans = 0;
    scanf("%s", n);

    for (int i = 0; i < 5; i++) 
        if (n[i] == '5') 
            ans++;
    printf("%d", ans);
}
