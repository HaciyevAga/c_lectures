#include <stdio.h>

int main()
{
    char n[100], ans;
    scanf("%s", n);
    if (n[0] == '-') 
        ans = n[1];
    else
        ans = n[0];
    printf("%c", ans);
}
