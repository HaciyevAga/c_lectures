#include <stdio.h>

int main()
{
    char n[4];
    scanf("%3s", n);
    if (n[0] == '0') 
        printf("%c",n[2]);
    else
        printf("%c%c", n[0], n[2]);
    return 0;
}
