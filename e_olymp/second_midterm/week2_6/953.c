#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int last_digit = n % 10;
    int first_digit = n / 100;
    printf("%d", last_digit % first_digit);


    return 0;
}



