#include<stdio.h>

int main()
{
    int n, a, b;
    scanf("%d", &n);
    a = n / 100;
    b = n % 10;
    if(a > b){
        printf("%d", a);
    }
    else if(b > a){
        printf("%d", b);
    }
    else{
        printf("=");
    }

    return 0;
}
