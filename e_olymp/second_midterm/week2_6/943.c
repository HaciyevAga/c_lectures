#include <stdio.h>

int main()
{
    char n[4];
    scanf("%3s", n);
    char temp = n[0];
    n[0] = n[2];
    n[2] = temp;
    if (n[0] == '0') 
        printf("%c%c", n[1], n[2]);
    else if (n[0] == '0' && n[1] == '0')
        printf("%c", n[2]);
    else
        printf("%s", n);
    return 0;
}
