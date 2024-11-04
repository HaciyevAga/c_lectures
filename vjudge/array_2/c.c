#include <stdio.h>

int main()
{
    int n,  t = 1, num = 0;
    scanf("%d", &n);
    float s[n], sum = 0;
    for (int i = 0; i < n; i++)
        scanf("%f", &s[i]);
    for (int j = 0; j < n; j++){
        if (t % 3 == 0 && s[j] > 0){
            sum += s[j];
            num++;
        }
    t++;
    }
    printf("%d %.2f", num, sum);


    return 0;
}
