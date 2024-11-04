#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    int ans = 0;
    char n[101];
    scanf("%s", n);
    float len = strlen(n);
    for (int i = 0; i < ceil(len/2); i++) {
        if (n[i] == n[strlen(n) - 1 - i])
            ans++; 
        
    }   
    printf("%d", ans );

    return 0;
}
