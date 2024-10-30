#include <math.h>
#include <stdio.h>

int is_armstrong(int num)
{
    int org_num = num;
    int ans = 0;
    while(num > 0){
        ans += pow(num%10, 3);
        num /= 10;
    }    
    if (ans == org_num)
        return 1;
    return 0;
}


int main()
{
    int a, b, ans[1000], t = 0;
    scanf("%d %d", &a, &b);
    for (int i = a; i <= b; i++) {
        if (is_armstrong(i)) {
            ans[t] = i;
            t++;
        } 
    } 
    for (int j = 0; j < t; j++) 
        printf("%d ", ans[j]);

    return 0;
}
