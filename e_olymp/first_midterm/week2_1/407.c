#include <stdio.h>

int main()
{
    int t, k;
    scanf("%d", &t);
    char x[3] = {'G','C', 'V'};

    while(t--){
        scanf("%d", &k);
        int days = k % 4;

        for (int i = 0; i < days; i++) {
            char temp = x[1];
            x[1] = x[2];
            x[2] = temp;
            temp = x[0];
            x[0] = x[1];
            x[1] = temp;
        } 
        for (int k = 0; k < 3; k++) {
            printf("%c", x[k]);
        }

        printf("\n");
    }

    return 0;
}
