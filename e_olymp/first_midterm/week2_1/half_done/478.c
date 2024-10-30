#include <stdio.h>

int main()
{
    int a, b, c, cubes, paint;
    scanf("%d %d %d", &a, &b, &c);
    cubes = a * b * c;
    paint = 2*(a * b + b * c);
    printf("%d %d ", cubes, paint);


}
