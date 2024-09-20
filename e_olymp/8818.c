#include<stdio.h>
#include<math.h>

/*
 *
 * ISHLE
    */



int main()
{
    long long n, start, finish;
    long long t = 0;
    scanf("%lld", &n);
    start = pow(10, n -1); 
    finish = pow(10, n) -1;
    for(int i = start; i <= finish;i++){
        if(i % 2 == 1){
            t += 1;
        }
    }
    printf("%lld", t);
}
