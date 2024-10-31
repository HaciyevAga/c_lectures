#include <stdio.h>

int main() 
{
    int n, f1, f2;
    //scanf("%d", &n);
    n = 123;
    int c = n%10;
    int b = (n/10)%10;
    int a = n/100;

    if (a < b && a < c) f1 = a;
    else if (b < a && b < c) f1 = b;

    if (f1 == a && b > c) f2 = c;
    if (f1 == b && a > c) f2 = c;
    if (f1 == c && a > b) f2 = b;

    printf("%d%d", f1, f2);
}
