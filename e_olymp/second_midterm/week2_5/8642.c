#include <stdio.h>
#include <math.h>

int is_armstrong(int number) {
    int original = number;
    int sum = 0;
    while (number > 0) {
        int digit = number % 10;
        sum += pow(digit, 4);  
        number /= 10;
    }
    return sum == original;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    for (int i = a; i <= b; i++) {
        if (is_armstrong(i)) {
            printf("%d ", i);  
        }
    }

    return 0;
}
