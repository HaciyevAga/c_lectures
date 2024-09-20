#include<stdio.h>

int main()
{
    int a, b, peri, area;
    scanf("%d %d", &a, &b);
    peri = 2*(a + b);
    area = a*b;
    printf("%d %d", &peri, &area );
}
