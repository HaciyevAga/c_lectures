#include <stdio.h>

int main()
{
    char n[5];
    scanf("%4s", n);
    if (n[1] == '0') 
        printf("%c",n[2]);
    else
        printf("%c%c", n[1], n[2]);
    return 0;
}
