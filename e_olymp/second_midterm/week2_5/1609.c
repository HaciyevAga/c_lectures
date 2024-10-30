#include <stdio.h>

int main()
{
    int ans = 0;
    char n[100], a;
    scanf("%s\n%c", n, &a);
    for(int i = 0; i < 101;i++) 
        if (n[i] == a) 
            ans++;
    printf("%d", ans);

}
