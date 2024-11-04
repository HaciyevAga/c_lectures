#include <stdio.h>

int main()
{
    int n, sum = 0, ans = 0;
    scanf("%d", &n);
    int s[n];

    for (int  i = 0; i < n; i++){
        scanf("%d", &s[i]);
        sum += s[i];
    }

    int avg = sum / n;

    for (int j = 0; j < n; j++) {
        if (s[j] > avg) {
            ans++; 
        } 
    }
    
    printf("%d", ans);



    return 0;
}
